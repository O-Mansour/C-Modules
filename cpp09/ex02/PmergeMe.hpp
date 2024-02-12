#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <cstdlib>
#include <vector>
#include <deque>
#include <sstream>
#include <algorithm>
#include <sys/time.h>

void	show_error(const std::string& err_msg);
void	check_arg(const char *arg);
unsigned int convert_arg(const char *arg);
void	sort_vector(std::vector<unsigned int> &Vec);
void	sort_deque(std::deque<unsigned int> &Deq);
void	process_w_vector(int ac, char const *av[]);
void	process_w_deque(int ac, char const *av[]);

#endif
