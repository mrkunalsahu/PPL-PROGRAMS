#include <iostream>
#include <math.h>
using namespace std;
//multilevel inheritance
class person
{
	char name[30];
	int age;
	public :
		void read()
		{
			cout<<"enter name :";
			cin>>name;
			cout<<"enter age :";
			cin>>age;
		} 
		void show()
		{
			cout<<"name :"<<name;
			cout<<"\nage :"<<age;
		}
};

class employee:public person
{
	char dept[10];
	public :
		void read()
		{
			person::read();
			cout<<"enter department : ";
			cin>>dept;
		}
		void show()
		{
			person::show();
			cout<<"\ndepartment : "<<dept;
		}
};

class account : public employee
{
	float bal;
	int ano;
	public :
		void read()
		{
			employee::read();
			cout<<"enter acount no. :";
			cin>>ano;
			cout<<"enter balance :";
			cin>>bal;
		}
		void show()
		{
			employee::show();
			cout<<"\naccount no. :"<<ano;
			cout<<"\nbalance :"<<bal;
		}
};

int main()
{	
    account a;
    cout<<"enter information : ";
    a.read();
    cout<<"\n\n\ndetails :\n";
    a.show();
    return 0;
}    