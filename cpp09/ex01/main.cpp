#include "RPN.hpp"

int main(int ac, char const *av[])
{
	if (ac != 2)
		show_error("Error");
	RPN rpn_calculator;
	rpn_calculator.calculate(av[1]);
	return 0;
}
