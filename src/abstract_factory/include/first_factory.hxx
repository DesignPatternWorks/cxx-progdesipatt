#if !defined(FIRST_FACTORY_HXX)
#define FIRST_FACTORY_HXX (1)

#include "abstract_factory.hxx"

class FirstFactory: public AbstractFactory {
public:
	FirstFactory(void);
	~FirstFactory(void);
protected:
	AbstprodAudiovisual * createProdAudiovisual(void);
	AbstprodAppliance * createProdAppliance(void);
};
#endif /* !defined(FIRST_FACTORY_HXX) */
