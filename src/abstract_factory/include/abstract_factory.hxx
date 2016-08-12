#if !defined(ABSTRACT_FACTORY_HXX)
#define ABSTRACT_FACTORY_HXX (1)

class AbstprodAudiovisual;
class AbstprodAppliance;
class AbstractFactory {
protected:
	AbstractFactory(void);
public:
	/*
	 * XXX-NOTE:
	 * When delete NOT use "AbstractFactory::"
	 * When mean to delete not-only "AbstractFactory::" but it's child first
	 */
	virtual ~AbstractFactory(void);
	/*
	 * AbstractFactory needs to produce
	 * - So "produce..."
	 * XXX-NOTE: current support only one
	 */
	int produceAudiovisual(void);
	int produceAppliance(void);
protected:
	virtual AbstprodAudiovisual * createProdAudiovisual(void) = 0;
	virtual AbstprodAppliance * createProdAppliance(void) = 0;
private:
	AbstprodAudiovisual * _prodAudiovisual;
	AbstprodAppliance * _prodAppliance;
};
#endif /* !defined(ABSTRACT_FACTORY_HXX) */
