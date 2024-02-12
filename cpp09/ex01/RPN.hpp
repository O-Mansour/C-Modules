#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <cstdlib>

class RPN
{
private:
	std::stack<double> nbr_stack;
public:
	RPN();
	RPN(const RPN& other);
	RPN& operator=(const RPN& other);
	~RPN();

	void calculate(const char *input);
};

void	show_error(const std::string& err_msg);

#endif
