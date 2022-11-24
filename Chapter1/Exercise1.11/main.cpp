#include <iostream>

int main()
{
	int a, b;
	std::cout << "Please input two integers: " << std::endl;
	std::cin >> a >> b;

	int i = a;
	while (i <= b)
	{
		std::cout << i << std::endl;
		++i;
	}

	return 0;
}