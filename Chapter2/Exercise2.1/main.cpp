#include <iostream>

int main()
{
	// signed integers
	std::cout << "The size of (signed) short is " << sizeof(/*signed*/ short) << " bytes" << std::endl;
	std::cout << "The size of (signed) int is " << sizeof(/*signed*/ int) << " bytes" << std::endl;
	std::cout << "The size of (signed) long is " << sizeof(/*signed*/ long) << " bytes" << std::endl;
	std::cout << "The size of (signed) long long is " << sizeof(/*signed*/ long long) << " bytes" << std::endl;

	// unsigned integers
	std::cout << "The size of unsigned short is " << sizeof(unsigned short) << " bytes" << std::endl;
	std::cout << "The size of unsigned int is " << sizeof(unsigned int) << " bytes" << std::endl;
	std::cout << "The size of unsigned long is " << sizeof(unsigned long) << " bytes" << std::endl;
	std::cout << "The size of unsigned long long is " << sizeof(unsigned long long) << " bytes" << std::endl;

	// char, unsigned char, signed char
	std::cout << "The size of char is " << sizeof(char) << " bytes" << std::endl;
	std::cout << "The size of unsigned char is " << sizeof(unsigned char) << " bytes" << std::endl;
	std::cout << "The size of signed char is " << sizeof(signed char) << " bytes" << std::endl;

	// bool
	std::cout << "The size of bool is " << sizeof(bool) << " bytes" << std::endl;

	// floating point
	std::cout << "The size of float is " << sizeof(float) << " bytes" << std::endl;
	std::cout << "The size of double is " << sizeof(double) << " bytes" << std::endl;
	std::cout << "The size of long double is " << sizeof(long double) << " bytes" << std::endl;

	bool b = 42;
	int i = b;
	i = 3.14;
	double pi = i;
	unsigned char c = -1;
	signed char c2 = 256;

	return 0;
}