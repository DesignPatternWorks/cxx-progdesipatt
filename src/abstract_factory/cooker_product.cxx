#include "cooker_product.hxx"
#include <iostream>

CookerProduct::CookerProduct(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
}

CookerProduct::~CookerProduct(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
}
