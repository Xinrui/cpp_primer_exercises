#include <iostream>

int main()
{
	std::cout << "/*"; // ok
	std::cout << "*/"; // of course ok
	// std::cout << /* "*/" */; // wrong nest!
	std::cout << /*  "*/" /*  "/*"  "*/; // ok, but very BAD grammer
	
	return 0;
}