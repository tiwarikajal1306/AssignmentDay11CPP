#include <iostream>

using namespace std;

class child;
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

	friend int add(parent, child);

};


//Inheritance concept

class child: public parent
{
	int s;
        public:
        void showdata() {
                cout << "p is not accessible" << endl;
                cout << "value of q is " << q << endl;
                cout << "value of r is " << r << endl;
        }

	public:
		child() {
			s = 10;
		}
	friend int add(parent, child);
};

int add(parent p, child c) {
	return (p.p + c.s);
}

int main()
{
        child c1;                      //object of derived class(child)
        c1.showdata();
        parent p1;
        //c.p = 100;                invalid : private member is accecss by method which is not in its derived class
        //c.q = 200;                invalid : q private member is accecss by method which is not in its derived class
        //c.r = 300;                invalid : r is access by child class object
        //p.r = 300;

	cout << "Addition of two values is : " << add(p1, c1) <<endl;
        return 0;
}
