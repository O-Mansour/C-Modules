#include "PmergeMe.hpp"

void	show_error(const std::string& err_msg)
{
	std::cerr << err_msg << std::endl;
	std::exit(EXIT_FAILURE);
}

void	check_arg(const char *arg)
{
	for (int i = 0; arg[i]; i++)
	{
		if (i == 0 && arg[i] == '+' && arg[i + 1])
			continue ;
		if (!isdigit(arg[i]))
			show_error("Error : Invalid argument");
	}
}

unsigned int convert_arg(const char *arg)
{
	unsigned int res;
	std::istringstream iss(arg);
	if (!(iss >> res))
		show_error("Error : The argument is not a valid number");
	return res;
}

void	sort_vector(std::vector<unsigned int> &Vec)
{
	if (Vec.size() == 1)
		return ;
	// Compare the pairs
	for (size_t i = 0; i < Vec.size(); i += 2)
	{
		if (i + 1 < Vec.size())
		{
			if (Vec[i] > Vec[i + 1])
				std::swap(Vec[i], Vec[i + 1]);
		}
	}
	if (Vec.size() == 2)
		return ;
	std::vector<unsigned int> smallest;
	std::vector<unsigned int> largest;
	for (size_t i = 0; i < Vec.size(); i++)
	{
		if (i % 2)
			largest.push_back(Vec[i]);
		else
			smallest.push_back(Vec[i]);
	}
	// Recursively sort the smallest group
	sort_vector(smallest);
	// Insert the largest group
	std::vector<unsigned int>::iterator it = largest.begin();
	for (; it != largest.end(); it++)
	{
		std::vector<unsigned int>::iterator pos = std::lower_bound(smallest.begin(), smallest.end(), *it);
		smallest.insert(pos, *it);
	}
	Vec = smallest;
}

void	sort_deque(std::deque<unsigned int> &Deq)
{
	if (Deq.size() == 1)
		return ;
	std::deque<unsigned int>::iterator it;
	for (it = Deq.begin(); it != Deq.end(); it += 2)
	{
		if ((it + 1) != Deq.end())
		{
			if (*it > *(it + 1))
				std::swap(*it, *(it + 1));
		}
		else
			break ;
	}
	if (Deq.size() == 2)
		return ;
	std::deque<unsigned int> smallest;
	std::deque<unsigned int> largest;
	size_t i = 0;
	for (it = Deq.begin(); it != Deq.end(); it++)
	{
		if (i % 2)
			largest.push_back(*it);
		else
			smallest.push_back(*it);
		i++;
	}
	sort_deque(smallest);
	for (it = largest.begin(); it != largest.end(); it++)
	{
		std::deque<unsigned int>::iterator pos = std::lower_bound(smallest.begin(), smallest.end(), *it);
		smallest.insert(pos, *it);
	}
	Deq = smallest;
}

void	before_after(int ac, char const *av[], const std::vector<unsigned int> &after)
{
	std::vector<unsigned int> before;
	for (int i = 1; i < ac; i++)
	{
		check_arg(av[i]);
		before.push_back(convert_arg(av[i]));
	}

	std::cout << "Before: ";
	for (size_t i = 0; i < before.size(); i++)
	{
		if (i == 5)
		{
			std::cout << "[..]";
			break;
		}
		std::cout << before[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "After: ";
	for (size_t i = 0; i < after.size(); i++)
	{
		if (i == 5)
		{
			std::cout << "[..]";
			break;
		}
		std::cout << after[i] << " ";
	}
	std::cout << std::endl;
}

void	process_w_vector(int ac, char const *av[])
{
	struct timeval s_time, e_time;
	// fill the container
	gettimeofday(&s_time, NULL);
	std::vector<unsigned int> Vec;
	for (int i = 1; i < ac; i++)
	{
		check_arg(av[i]);
		Vec.push_back(convert_arg(av[i]));
	}

	// sort the container and show infos
	sort_vector(Vec);
	gettimeofday(&e_time, NULL);

	before_after(ac, av, Vec);
	double t_time = ((e_time.tv_sec - s_time.tv_sec) * 1e6) +
		(e_time.tv_usec - s_time.tv_usec);
	std::cout << "Time to process a range of " << Vec.size()
		<< " elements with std::vector : " << t_time << " us" << std::endl;
}

void	process_w_deque(int ac, char const *av[])
{
	struct timeval s_time, e_time;
	// fill the container
	gettimeofday(&s_time, NULL);
	std::deque<unsigned int> Deq;
	for (int i = 1; i < ac; i++)
	{
		check_arg(av[i]);
		Deq.push_back(convert_arg(av[i]));
	}

	// sort the container and show time
	sort_deque(Deq);
	gettimeofday(&e_time, NULL);

	double t_time = ((e_time.tv_sec - s_time.tv_sec) * 1e6) +
		(e_time.tv_usec - s_time.tv_usec);
	std::cout << "Time to process a range of " << Deq.size()
		<< " elements with std::deque : " << t_time << " us" << std::endl;
}
