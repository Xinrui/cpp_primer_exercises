#include <iostream>

int main()
{
	int i, sum = 0;

	// More compact, more elegant, however bad readability
	for (; std::cin >> i; )
	{
		sum += i;
	}

	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}