#include <iostream>

using namespace std;

class Base
{
	public:
	void fun1()
	{
		cout << "fun1 of Base" << endl;
	}

	virtual void fun2() = 0;
	//{
	//	cout << "fun2 from Base" <<endl;
	//}
};

class Derived : public Base
{
	public:
	void fun2()
	{
		cout << "fun2 of derived" << endl;
	}
};

int main()
{
	Derived d;
	d.fun1();
	d.fun2();
	return 0;
}
