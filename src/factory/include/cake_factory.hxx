#if !defined(CAKE_FACTORY_HXX)
#define CAKE_FACTORY_HXX (1)

#include "factory.hxx"

class CakeFactory: public Factory {
public:
	CakeFactory(void);
	~CakeFactory(void);
protected:
	Product * createProduct(void);
};
#endif /* !defined(CAKE_FACTORY_HXX) */
