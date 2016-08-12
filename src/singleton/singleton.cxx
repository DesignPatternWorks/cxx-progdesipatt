#include "singleton.hxx"
#include <iostream>

Singleton * Singleton::_instance = NULL;

Singleton * Singleton::instance(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	if (NULL == Singleton::_instance) {
		Singleton::_instance = new Singleton();
	}
	return Singleton::_instance;
}

void Singleton::release(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	Singleton * inst = Singleton::_instance;
	Singleton::_instance = NULL;
	if (NULL != inst) {
		delete inst;
		inst = NULL;
	}
}

Singleton::Singleton(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
}

Singleton::~Singleton(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
}
