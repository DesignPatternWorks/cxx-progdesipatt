#include "factory.hxx"
#include "product.hxx"
#include <errno.h>
#include <iostream>

Factory::Factory(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	this->_product = NULL;
}

Factory::~Factory(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	if (NULL != this->_product) {
		delete this->_product;
		this->_product = NULL;
	}
}

Product * Factory::createProduct(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	return NULL;
}

int Factory::produce(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	if (NULL != this->_product) {
		return -EBUSY;
	}
	this->_product = this->createProduct();
	if (NULL == this->_product) {
		return -ENODEV;
	} else {
		return 0;
	}
}
