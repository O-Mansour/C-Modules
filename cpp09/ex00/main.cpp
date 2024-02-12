#include "BitcoinExchange.hpp"

int main(int ac, char const *av[])
{
	if (ac != 2)
		show_error("Error : could not open file.");
	BitcoinExchange bitExchange;
	bitExchange.show_value(av[1]);
	return 0;
}
