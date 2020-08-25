#include <iostream>

using namespace std;
class parent
{
	private:
	int p;

	protected:
	int q;

	public:
	int r;

	parent() {                  //constructor to initialize data member
		p = 100;
		q = 200;
		r = 300;
	}
};

//Inheritance concept

class child: public parent
{

	public:
	void showdata() {
		cout << "p is not accessible" << endl;
		cout << "value of q is " << q << endl;
		cout << "value of r is " << r << endl;
	}

};

int main()
{
	child c;                      //object of derived class(child)
	c.showdata();
	parent p;
	//c.p = 100;                invalid : private member is accecss by method which is not in its derived class
	//c.q = 200;   		    invalid : q private member is accecss by method which is not in its derived class
	//c.r = 300;   		    invalid : r is access by child class object
	p.r = 300;
	return 0;
}
