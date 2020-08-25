#include <iostream>

using namespace std;

class A {
	public:
	void f1() {
		cout << "I am in f1 function" << endl;
	}

	virtual void f2() {
		cout<< "I am in f2 functon" << endl;
	}

	virtual void f3() {
		cout << "I am in f3 Function" << endl;
	}

	virtual void f4() {
		cout << "I am in f4 Function" << endl;
	}
};

class B : public A
{
	public:
	void f1() {
		cout << "I am in child class of f1 function" << endl;
	}

	void f2() {
		cout << "I am in child class of f2 function" <<endl;
	}
};

int main() {
	A *p;
	B o2;
	p = &o2;

	p -> f1();       // call A class method..pointer of A class
	o2.f1();	// call B class method
	p -> f2();
	p -> f3();
	p -> f4();
	return 0;
}

