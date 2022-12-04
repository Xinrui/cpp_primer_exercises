#include <iostream>

int main()
{
	int a, b;
	std::cout << "Please input two integers: " << std::endl;
	std::cin >> a >> b;
	
	// customized for 1.19
	if (a > b)
	{
		std::swap(a, b);
	}

	int i = a;
	while (i <= b)
	{
		std::cout << i << std::endl;
		++i;
	}

	return 0;
}