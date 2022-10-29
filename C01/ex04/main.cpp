/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:03:57 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/26 09:03:57 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#define RS "\e[0;0m"
#define R "\e[0;31m"
#define G "\e[0;32m"
#define Y "\e[0;33m"

static int	readFile(std::string filename, std::string &str)
{
	std::ifstream	file;
	std::ostringstream	ss;

	file.open(filename.c_str(), std::ios::in);
	if (!file)
	{
		std::cout << R + filename << " does not exist !" RS << std::endl;
		return 1;
	}
	ss << file.rdbuf();
	str = ss.str();
	file.close();
	return 0;
}

static int	writeFile(std::string filename, std::string &str)
{
	std::ofstream		new_file;

	new_file.open(filename.c_str(), std::ios::out);
	if (!new_file)
	{
		std::cout << R + filename << " Could not be created." RS << std::endl;
		return 1;
	}
	new_file << str;
	new_file.close();
	return 0;
}

static std::string	sed(std::string str, std::string s1, std::string s2)
{
	std::size_t			f1(0);
	std::size_t			f2(0);
	std::string			cp_str("");

	f1 = str.find(s1, f1);
	if (f2 == std::string::npos || s1 == "")
		return str;
	cp_str = str.substr(0, f1);
	while (str.find(s1, f1 + 1) != std::string::npos)
	{
		f2 = str.find(s1, f1 + s1.length());
		cp_str = cp_str + s2 + str.substr(f1 + s1.length(), f2 - f1 - s1.length());
		f1 = f2;
	}
	return(cp_str);
}

int main(int argc, char **argv)
{
	std::string			filename;
	std::string			str("");
	std::string			new_str;
	std::string			s1;
	std::string			s2;

	if (argc != 4)
	{
		std::cout << R "Wrong number of argument !" RS << std::endl;
		return 1;
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (readFile(filename, str) == 1)
		return 1;
	new_str = sed(str, s1, s2);
	if (writeFile(filename + ".replace", new_str) == 1)
		return 1;
	return 0;
}
