#include "abstract_factory.hxx"
#include "abstprod_audiovisual.hxx"
#include "abstprod_appliance.hxx"
#include <errno.h>
#include <iostream>

AbstractFactory::AbstractFactory(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	this->_prodAudiovisual = NULL;
	this->_prodAppliance = NULL;
}

AbstractFactory::~AbstractFactory(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	if (NULL != this->_prodAudiovisual) {
		delete this->_prodAudiovisual;
		this->_prodAudiovisual = NULL;
	}
	if (NULL != this->_prodAppliance) {
		delete this->_prodAppliance;
		this->_prodAppliance = NULL;
	}
}

/*
 * XXX-NOTE: current support only one
 */
int AbstractFactory::produceAudiovisual(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	if (NULL != this->_prodAudiovisual) {
		return -EBUSY;
	}
	/*
	 * NO "AbstractFactory::"
	 */
	this->_prodAudiovisual = this->createProdAudiovisual();
	if (NULL == this->_prodAudiovisual) {
		return -ENODEV;
	} else {
		return 0;
	}
}

/*
 * XXX-NOTE: current support only one
 */
int AbstractFactory::produceAppliance(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	if (NULL != this->_prodAppliance) {
		return -EBUSY;
	}
	/*
	 * NO "AbstractFactory::"
	 */
	this->_prodAppliance = this->createProdAppliance();
	if (NULL == this->_prodAppliance) {
		return -ENODEV;
	} else {
		return 0;
	}
}

AbstprodAudiovisual * AbstractFactory::createProdAudiovisual(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	return NULL;
}

AbstprodAppliance * AbstractFactory::createProdAppliance(void)
{
	std::cout
		<< __FILE__
		<< " +" << __LINE__
		<< ": " << __func__ << "()"
		<< "\n";
	return NULL;
}
