#include <iostream>

#include "Sales_item.h"

// has the same structure as the program in Section 1.4.4.

int main()
{
	Sales_item trans, currTrans;

	if (std::cin >> currTrans)
	{
		int cnt = 1;
		while (std::cin >> trans)
		{
			if (trans.isbn() == currTrans.isbn())
			{
				++cnt;
			}
			else
			{
				std::cout << currTrans.isbn() << " occurs " << cnt << " times." << std::endl;
				currTrans = trans;
				cnt = 1;
			}
		}

		std::cout << currTrans.isbn() << " occurs " << cnt << " times." << std::endl;
	}

	return 0;
}