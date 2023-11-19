#include <iostream>

int return_value(int *s)
{
	int k = *s;
	*s = *s - 1;
	return k;
}

int main()
{
	int n = 0;
	for (size_t i = 0; i < 4; i++)
		std::cout << return_value(&n) << std::endl;
	
	return 0;
}
