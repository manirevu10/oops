#include<iostream>
using namespace std;
class employe
{
	private:
		string name;
		int id;
		string designation;
		int salary;
		public:
			void read()
			{
				cout<<"enter name";
				cin>>name;
				cout<<"enter id";
				cin>>id;
				cout<<"enter designation";
				cin>>designation;
				cout<<"enter salary";
				cin>>salary;
			}
			void display()
			{
				cout<<"\nname:"<<name;
				cout<<"\nid:"<<id;
				cout<<"\ndesignation:"<<designation;
				cout<<"\nsalary:"<<salary;
			}
};
main()
{
	employe e1,e2;
	e1.read();
	e1.display();
	e2.read();
	e2.display();
}
