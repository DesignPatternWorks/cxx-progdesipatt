#include "first_factory.hxx"
#include "music_product.hxx"
#include "tv_product.hxx"
#include <iostream>

FirstFactory::FirstFactory(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
}

FirstFactory::~FirstFactory(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
}

AbstprodAudiovisual * FirstFactory::createProdAudiovisual(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	return new MusicProduct();
}

AbstprodAppliance * FirstFactory::createProdAppliance(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	return new TvProduct();
}
