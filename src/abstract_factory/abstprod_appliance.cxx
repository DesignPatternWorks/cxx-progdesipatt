#include "abstprod_appliance.hxx"
#include <iostream>

AbstprodAppliance::AbstprodAppliance(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
}

AbstprodAppliance::~AbstprodAppliance(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
}
