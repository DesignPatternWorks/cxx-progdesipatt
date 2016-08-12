#include <stdio.h>
#include "abstract_factory.hxx"
#include "first_factory.hxx"
#include "second_factory.hxx"

static int __produceTask(AbstractFactory * f)
{
	int ret = 0;
	if (f) {
		if (f->produceAudiovisual()) {
			ret = -1;
		}
		if (f->produceAppliance()) {
			if (ret) {
				ret = -3;
			} else {
				ret = -2;
			}
		}
	} else {
		ret = -4;
	}
	return ret;
}

int main(void)
{
	AbstractFactory * factorys[2];
	factorys[0] = new FirstFactory();
	factorys[1] = new SecondFactory();
	int ret;
	for (int i = 0; i < 2; ++i) {
		fprintf(stdout, "factorys[%d]\n", i);
		ret = __produceTask(factorys[i]);
		fprintf(stderr, "__produceTask(...%d): ret: %d\n",
			i, ret);
	}
	delete factorys[0];
	factorys[0] = NULL;
	delete factorys[1];
	factorys[1] = NULL;
	return 0;
}
