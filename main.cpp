#include <iostream>

template <int n>
struct Factorial
{
	const static int val = n * Factorial<n - 1>::val;
};

template <>
struct Factorial<0>
{
	const static int val = 1;
};


int main()
{
	std::cout<<Factorial<4>::val<<std::endl;


	return 0;
}
