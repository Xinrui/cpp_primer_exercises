#include <iostream>

#include "Sales_item.h"

int main()
{
	Sales_item book1, book2;

	std::cout << "Please input two transactions which have the same ISBN number." << std::endl;

	std::cin >> book1 >> book2;

	if (book1.isbn() == book2.isbn())
	{
		std::cout << book1 + book2 << std::endl;
	}
	else
	{
		std::cout << "The books of your transactions have different ISBNs." << std::endl;
	}

	return 0;
}