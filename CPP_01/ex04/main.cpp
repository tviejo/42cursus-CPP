/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:32:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/14 18:51:32 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

int main(int argc, char **argv)
{
    std::string line;
    if (argc != 4) 
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string new_filename = filename + ".replace";
    std::ifstream file;
    file.open(filename.c_str());
    if (!file.is_open())
    {
        std::cout << "Error: file not found" << std::endl;
        return (1);
    }
    std::ofstream new_file;
    new_file.open(new_filename.c_str());
    if (!new_file.is_open())
    {
        std::cout << "Error: could not create new file" << std::endl;
        return (1);
    }
    while (file.good())
    {
        std::getline(file, line);
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        new_file << line << std::endl;
    }
}