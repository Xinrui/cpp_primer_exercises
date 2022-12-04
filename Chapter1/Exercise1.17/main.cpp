#include <iostream>

int main()
{
	int currVal, val;

	if (std::cin >> currVal)
	{
		int cnt = 1;

		while (std::cin >> val)
		{
			if (val == currVal) // if the input values are all equal
			{
				++cnt;
			}
			else // no duplcated values
			{
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}

		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	}

	return 0;
}