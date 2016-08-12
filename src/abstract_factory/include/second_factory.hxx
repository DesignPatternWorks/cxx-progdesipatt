#if !defined(SECOND_FACTORY_HXX)
#define SECOND_FACTORY_HXX (1)

#include "abstract_factory.hxx"

class SecondFactory: public AbstractFactory {
public: SecondFactory(void);
public: ~SecondFactory(void);
protected:
	AbstprodAudiovisual * createProdAudiovisual(void);
	AbstprodAppliance * createProdAppliance(void);
};
#endif /* !defined(SECOND_FACTORY_HXX) */
