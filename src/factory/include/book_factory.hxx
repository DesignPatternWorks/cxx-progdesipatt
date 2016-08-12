#if !defined(BOOK_FACTORY_HXX)
#define BOOK_FACTORY_HXX (1)

#include "factory.hxx"

class BookFactory: public Factory {
public: BookFactory(void);
public: ~BookFactory(void);
protected:
	Product * createProduct(void);
};
#endif /* !defined(BOOK_FACTORY_HXX) */
