#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <iomanip>

class BitcoinExchange
{
private:
	std::map<std::string, float> exchange_map;
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange&);
	BitcoinExchange& operator=(const BitcoinExchange&);
	~BitcoinExchange();

	float	get_price(std::string& date);
	void show_value(const char *infile);
};

void	show_error(const std::string& err_msg);
float	strToFloat(const std::string& str);
std::pair<std::string,float>	split_string(const std::string& input, char delimiter);

#endif
