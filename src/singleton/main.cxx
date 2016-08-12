#include "singleton.hxx"
#include <iostream>

#define __MSGANY(__0_a) \
	std::cout \
		<< __FILE__ \
		<< " +" << __LINE__ \
		<< ": " << __func__ << "()" \
		<< __0_a \
		<< "\n"

int main(void)
{
	__MSGANY("To get instance");
	Singleton * st = Singleton::instance();
	__MSGANY("Addr of instance: "
		<< reinterpret_cast<unsigned long>(st));
	__MSGANY("x2: To get instance");
	st = Singleton::instance();
	__MSGANY("x2: Addr of instance: "
		<< reinterpret_cast<unsigned long>(st));
	__MSGANY("To delete instance");
	Singleton::release();
	st = NULL;
	__MSGANY("again: To get instance");
	st = Singleton::instance();
	__MSGANY("again: Addr of instance: "
		<< reinterpret_cast<unsigned long>(st));
	__MSGANY("To delete instance");
	Singleton::release();
	st = NULL;
	return 0;
}
