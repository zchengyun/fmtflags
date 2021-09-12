#include <iostream>

int main()
{
	int num = 150;

	// 以 fmtflags 为类成员常量：
	std::cout.setf(std::ios_base::hex, std::ios_base::basefield); //basefield设置整数的基数为n(n只能是16, 10, 8之一)
	std::cout.setf(std::ios_base::showbase);//输出0x基指示符，只有showbase才能显示0x?
	std::cout << num << '\n';

	// 以 fmtflags 为继承的类成员常量：
	std::cout.setf(std::ios::hex, std::ios::basefield);//ios继承于ios_base
	std::cout.setf(std::ios::showbase);
	std::cout << num << '\n';

	// 以 fmtflags 为对象成员常量：
	std::cout.setf(std::cout.hex, std::cout.basefield);
	std::cout.setf(std::cout.showbase);
	std::cout << num << '\n';

	// 不使用 fmtflags ，使用操纵符：
	std::cout << std::oct<< std::showbase << num << '\n';
}