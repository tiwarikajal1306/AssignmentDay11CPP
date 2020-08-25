#include <iostream>

using namespace std;

class Animal {
	public:
	Animal() {
		cout<< "Constructor of Animal class"<< endl;
	}
	int age;
	void walk() {
		cout << "animal walks" <<endl;
	}
};

class Tiger : virtual public Animal
{
	public:
	 Tiger() {
                cout<< "Constructor of Tiger class"<< endl;
        }

};

class Lion :  virtual public Animal
{
	public:
	 Lion() {
                cout<< "Constructor of Lion class"<< endl;
        }

};

class Liger : public Tiger, public Lion
{
	public:
   	Liger() {
                cout<< "Constructor of Liger class"<< endl;
        }

};

int main()
{
	Liger animal;
	animal.walk();
	return 0;
}
