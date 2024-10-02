/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:45:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/02 18:21:43 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
    this->setData();
}

BitcoinExchange::~BitcoinExchange(void)
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
    *this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
    if (this != &src)
    {
        this->_history = src._history;
    }
    return (*this);
}

Date BitcoinExchange::convertDateCSV(std::string date)
{
    int year = std::atoi(date.substr(0, date.find("-")).c_str());
    std::string mountstring = date.substr(date.find("-") + 1);
    int month = std::atoi(mountstring.substr(0, mountstring.find("-")).c_str());
    std::string daystring = mountstring.substr(mountstring.find("-") + 1);
    int day = std::atoi(daystring.c_str());
    return ((Date){year, month, day});
}

Date BitcoinExchange::convertDateTXT(std::string date)
{
    if (date.find("-") == std::string::npos)
        return ((Date){-1, -1, -1});
    int year = std::atoi(date.substr(0, date.find("-")).c_str());
    std::string mountstring = date.substr(date.find("-") + 1);
    if (mountstring.find("-") == std::string::npos)
        return ((Date){-1, -1, -1});
    int month = std::atoi(mountstring.substr(0, mountstring.find("-")).c_str());
    std::string daystring = mountstring.substr(mountstring.find("-") + 1);
    if (daystring.find("|") == std::string::npos)
        return ((Date){-1, -1, -1});
    int day = std::atoi(daystring.c_str());
    return ((Date){year, month, day});
}

int BitcoinExchange::ConvertDateToInt(Date date)
{
    return (date.year * 10000 + date.month * 100 + date.day);
}

Date BitcoinExchange::ConvertInttoDate(int date)
{
    return ((Date){date / 10000, (date / 100) % 100, date % 100});
}

bool    BitcoinExchange::dateIsValid(Date date)
{
    if (date.year < 0 || date.month < 0 || date.day < 0)
        return (false);
    if (date.month > 12 || date.day > 31 || date.year > 2024)
        return (false);
    return (true);
}


void    BitcoinExchange::setData(void)
{
    std::ifstream file("data.csv");
    if (!file.is_open())
        throw std::invalid_argument("file not found");
    std::string line;
    while (std::getline(file, line))
    {
        std::string value = line.substr(line.find(",") + 1);
        double valuedouble = std::atof(value.c_str());
        this->_history.insert(std::pair<int, double>(ConvertDateToInt(convertDateCSV(line)), valuedouble));
    }
}

void    BitcoinExchange::printHistory(void)
{
    for (std::multimap<int, double>::iterator it = this->_history.begin(); it != this->_history.end(); it++)
    {
        Date d = ConvertInttoDate(it->first);
        std::cout << d.year << "-" << d.month << "-" << d.day << " => " << it->second << std::endl;
    }
}

ParsedLine BitcoinExchange::parseLine(std::string line)
{
    Date date = convertDateTXT(line);
    int dateint = ConvertDateToInt(date);
    double nb_bitcoin = std::atol(line.substr(line.find("|") + 1).c_str());
    return ((ParsedLine){date, dateint, nb_bitcoin});
}

float   BitcoinExchange::getPrice(ParsedLine line)
{
    for (std::multimap<int, double>::iterator it = this->_history.begin(); it != this->_history.end(); it++)
    {
        if (it->first > line.date_int)
        {
            std::multimap<int, double>::iterator it2 = it;
            it2--;
            return (it2->second);
        }
    }
    return (-1);
}

void BitcoinExchange::printDate(ParsedLine line)
{
    std::cout << std::setw(4) << std::setfill(' ') << line.date.year << "-";
    std::cout << std::setw(2) << std::setfill('0') << line.date.month << "-";
    std::cout << std::setw(2) << std::setfill('0') << line.date.day;
}

void    BitcoinExchange::printValues(std::string input)
{
    std::ifstream file(input.c_str());
    if (!file.is_open())
        throw std::invalid_argument("file not found");
    std::string line;
    while (std::getline(file, line))
    {
        ParsedLine parsed = parseLine(line);
        if (dateIsValid(parsed.date) == false)
        {
            std::cout << "Error: bad input" << " => " << line.substr(0, line.find("|")) << std::endl;
        }
        else if (parsed.nb_bitcoin < 0)
            std::cout << "Error: not a positive number" << std::endl;
        else if (parsed.nb_bitcoin > 1000)
            std::cout << "Error: too large a number" << std::endl;
        else
        {
            float price = getPrice(parsed);
            if (price == -1)
                std::cout << "bad input" << std::endl;
            else
            {
                printDate(parsed);
                double value = price * parsed.nb_bitcoin;
                std::cout << " => " << parsed.nb_bitcoin << " = " << value << std::endl;
            }
        }
    }
}