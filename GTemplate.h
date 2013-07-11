#include <iostream>

using namespace std;

template<typename T>
class NODE
{
	protected:
		T* dataPointer;
	public:
		explicit NODE(const T& value)
		{
			dataPointer = new T;
			*dataPointer = value;  //operator = overload required
		}
		~NODE()
		{
			if(NULL!=dataPointer)
			{
				delete dataPointer;
			}
		}
		T* getDataPointer();
		T& operator* (void)   //allow access protected value by pointer, potential hazard
		{
			return *dataPointer;
		}

};
