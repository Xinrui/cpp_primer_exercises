#include <iostream>

int main()
{
	// Exercise 1.9
	{
		int sum = 0;

		for (int val = 50; val <= 100; ++val)
		{
			sum += val;
		}

		std::cout << "The sum from 50 to 100 is " << sum << std::endl;
	}

	// Exercise 1.10
	{

		for (int i = 10; i >= 0; --i)
		{
			std::cout << i << std::endl;
		}
	}

	// Exercise 1.11
	{
		int a, b;
		std::cout << "Please input two integers: " << std::endl;
		std::cin >> a >> b;

		for (int i = a; i <= b; ++i)
		{
			std::cout << i << std::endl;
		}
	}

	return 0;
}