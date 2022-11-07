#include <iostream>

int main()
{
	// we need extra initialization, e.g.
	int v1 = 1, v2 = 2;

	std::cout << "The sum of " << v1;
	// However, the semicolons of line 8 and 9 end
	// both statements, so they are grammerly wrong
	// and can be never compiled.

			<< " and " << v2;
			<< " is " << v1 + v2 << std::endl;
	
	return 0;
}