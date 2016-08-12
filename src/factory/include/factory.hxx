#if !defined(FACTORY_HXX)
#define FACTORY_HXX (1)

class Product;
class Factory {
protected:
	Factory(void);
public:
	virtual ~Factory(void) = 0;
public:
	/*
	 * XXX-NOTE: current support only one
	 */
	int produce(void);
	virtual Product * createProduct(void) = 0;
private:
	Product * _product;
};
#endif /* !defined(FACTORY_HXX) */
