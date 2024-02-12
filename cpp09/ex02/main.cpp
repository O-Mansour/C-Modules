#include "PmergeMe.hpp"

int main(int ac, char const *av[])
{
	if (ac == 1)
		return 1;

	process_w_vector(ac, av);
	process_w_deque(ac, av);

	return 0;
}
