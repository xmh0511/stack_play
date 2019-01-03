#include <iostream>
void print()
{
	std::cout << "hello,world" << std::endl;
}
void call(int x)
{
	std::ptrdiff_t* p = (std::ptrdiff_t*)&x;
	p--;
	*p = (std::ptrdiff_t)&print;
}
int main()
{
	int a = 1024;
	call(a);
	std::cin.get();
	return 0;
}
