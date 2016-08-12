#include <iostream>
#include "factory.hxx"
#include "cake_factory.hxx"
#include "book_factory.hxx"

static int __produceTask(Factory * f)
{
	if (f) {
		return f->produce();
	} else {
		return -1;
	}
}

int main(void)
{
	Factory * factorys[2];
	factorys[0] = new CakeFactory();
	factorys[1] = new BookFactory();
	for (int i = 0; i < 2; ++i) {
		std::cout
			<< __FILE__
			<< " +" << __LINE__
			<< ": " << __func__ << "(): "
			<< "factorys["
			<< i
			<< "]"
			<< "\n";
		__produceTask(factorys[i]);
	}
	delete factorys[0];
	factorys[0] = NULL;
	delete factorys[1];
	factorys[1] = NULL;
	return 0;
}
