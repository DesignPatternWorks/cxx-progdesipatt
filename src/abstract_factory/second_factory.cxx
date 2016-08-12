#include "second_factory.hxx"
#include "video_product.hxx"
#include "cooker_product.hxx"
#include <iostream>

SecondFactory::SecondFactory(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
}

SecondFactory::~SecondFactory(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
}

AbstprodAudiovisual * SecondFactory::createProdAudiovisual(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	return new VideoProduct();
}

AbstprodAppliance * SecondFactory::createProdAppliance(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	return new CookerProduct();
}
