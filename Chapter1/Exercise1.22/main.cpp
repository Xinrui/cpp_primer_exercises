#include <iostream>

#include "Sales_item.h"

int main()
{
	Sales_item sum, book;

	if (std::cin >> sum)
	{
		while (std::cin >> book)
		{
			if (book.isbn() == sum.isbn())
			{
				sum += book;
			}
			else
			{
				std::cout << "The transaction does not have the same ISBN as before." << std::endl;
			}
		}
	}

	std::cout << sum;

	return 0;
}