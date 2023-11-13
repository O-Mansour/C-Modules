/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:25:00 by omansour          #+#    #+#             */
/*   Updated: 2023/11/11 04:54:37 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

void	show_err(std::string msg)
{
	std::cerr << "Error : " << msg << std::endl;
	std::exit(EXIT_FAILURE);
}

void	sed(std::string filename, std::string s1, std::string s2)
{
	std::ifstream infile(filename.c_str());
	if (!infile.is_open())
		show_err("can't open the provided file.");
	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile.is_open())
		show_err("can't open the output file.");

	std::string	content;
	std::getline(infile, content, '\0');
	if (content.empty())
		show_err("empty file.");

	for (size_t i = 0; i < content.length(); i++)
	{
		size_t pos = content.find(s1, i);
		if (pos != std::string::npos)
		{
			content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
			i = pos + s2.length() - 1;
		}
	}
	infile.close();

	outfile << content;
	outfile.close();
}

int	main(int ac, char *av[])
{
	if (ac != 4)
		show_err("expect three parameters.");
	sed(av[1], av[2], av[3]);
	return 0;
}
