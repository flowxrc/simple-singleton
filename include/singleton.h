/*
 * Simple singleton design pattern.
 * Restricts the instantiation of a class to one single class instance
 * github: @flowxrc
*/

template <typename T>
class Singleton
{
protected:
	Singleton() { }
	~Singleton() { }

	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

	Singleton(Singleton&&) = delete;
	Singleton& operator=(Singleton&&) = delete;
public:
	static T& Get()
	{
		static T pInstance{ };
		return pInstance;
	}
};