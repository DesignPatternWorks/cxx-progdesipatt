#if !defined(SINGLETON_HXX)
#define SINGLETON_HXX (1)

class Singleton {
public:
	static Singleton * instance(void);
	static void release(void);
private:
	Singleton(void);
	~Singleton(void);
private:
	static Singleton * _instance;
};
#endif /* !defined(SINGLETON_HXX) */
