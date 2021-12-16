#include<iostream>
using namespace std;
class parent {
	public:
		parent() {
			cout << "base class constructor called \n";
		}
		~parent() {
			cout << "base class destructor called \n";
		}
};
class child: public parent {
	public:
		child() {
			cout << "Derived class constuctor called\n";
		}
		~child() {
			cout << "Derived class destructor called\n";
		}
};
int main() {
	child c1;
}
