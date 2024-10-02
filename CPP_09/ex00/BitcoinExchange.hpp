/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:45:45 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/02 18:14:14 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <exception>
# include <map>
# include <fstream>
# include <sstream>
# include <vector>
# include <algorithm>
# include <iterator>
# include <cstdlib>
#include <stdint.h>
# include <string>
# include <limits>
#include <iomanip>

typedef struct Date
{
    int year;
    int month;
    int day;
} Date;

typedef struct ParsedLine
{
    Date date;
    int date_int;
    double nb_bitcoin;
} ParsedLine;

class BitcoinExchange
{
    public:
        BitcoinExchange(void);
        ~BitcoinExchange(void);
        BitcoinExchange(const BitcoinExchange &src);
        BitcoinExchange &operator=(const BitcoinExchange &src);
        void    printValues(std::string input);
        void    printHistory(void);

    private:
        void    setData();
        std::multimap<int, double> _history;
        float   getPrice(ParsedLine line);
        void    printDate(ParsedLine line);
        Date    convertDateCSV(std::string date);
        Date    convertDateTXT(std::string date);
        ParsedLine parseLine(std::string line);
        bool    dateIsValid(Date date);
        Date    ConvertInttoDate(int date);
        int     ConvertDateToInt(Date date);
};

#endif