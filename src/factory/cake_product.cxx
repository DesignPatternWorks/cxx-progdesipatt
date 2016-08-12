#include "cake_product.hxx"
#include <iostream>

CakeProduct::CakeProduct(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
}

CakeProduct::~CakeProduct(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
}
