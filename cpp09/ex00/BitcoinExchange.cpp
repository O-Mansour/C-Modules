#include "BitcoinExchange.hpp"

void	show_error(const std::string& err_msg)
{
	std::cerr << err_msg << std::endl;
	std::exit(EXIT_FAILURE);
}

float strToFloat(const std::string& str)
{
	float res;
	std::istringstream iss(str);
	if (!(iss >> res))
		show_error("Error : EXPECTED A VALID NUMBER");
	return res;
}

std::pair<std::string,float> split_string(const std::string& input, std::string delimiter)
{
	std::pair<std::string, float> res;
	std::size_t pos = input.find(delimiter);

	if (pos == std::string::npos)
		show_error("Error : NOT THE EXPECTED FORM");
	res.first = input.substr(0, pos);
	res.second = strToFloat(input.substr(pos + delimiter.length()));
	return res;
}

std::pair<std::string,float> split_input(const std::string& input, std::string delimiter)
{
	std::pair<std::string, float> res;
	std::size_t pos = input.find(delimiter);

	if (pos == std::string::npos)
	{
		std::cout << "Error: bad input => " << input << std::endl;
		return res;
	}
	res.first = input.substr(0, pos);
	res.second = strToFloat(input.substr(pos + delimiter.length()));
	return res;
}

BitcoinExchange::BitcoinExchange()
{
	std::ifstream d_base("data.csv");
	
	if (!d_base.is_open())
		show_error("Error : NO DATABASE FILE");
	std::string buffer;
	std::getline(d_base, buffer);
	if (buffer.compare("date,exchange_rate") != 0 || d_base.eof() 
		|| d_base.fail())
		show_error("Error : NO VALID CONTENT IN THE DATABASE FILE");
	while(std::getline(d_base, buffer))
		exchange_map.insert(split_string(buffer, ","));
	d_base.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other)
		exchange_map = other.exchange_map;
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

float	BitcoinExchange::get_price(std::string& date)
{
	std::map<std::string, float>::iterator it = exchange_map.begin();
	for (; it != exchange_map.end() ; it++)
	{
		if (!it->first.compare(date))
			return it->second;
		else if (it->first.compare(date) > 0)
		{
			it--;
			return it->second;
		}
	}
	return -1;
}

void BitcoinExchange::show_value(const char *in)
{
	std::ifstream infile(in);

	if (!infile.is_open())
		show_error("Error : could not open file.");
	std::string buffer;
	std::getline(infile, buffer);
	if (buffer.compare("date | value") != 0 || infile.eof()
		|| infile.fail())
		show_error("Error : NO VALID CONTENT IN THE INPUT FILE");
	while (std::getline(infile, buffer))
	{
		std::pair<std::string, float> pr = split_input(buffer, " | ");
		if (pr.first.empty())
			continue ;
		if (pr.second < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		if (pr.second > 1000)
		{
			std::cout << "Error: too large number." << std::endl;
			continue;
		}
		float price = get_price(pr.first);
		std::cout << pr.first << " => " << pr.second << " = " << pr.second * price << std::endl;
	}
	infile.close();
}
