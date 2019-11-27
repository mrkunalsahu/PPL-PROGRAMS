#include <iostream>
using namespace std;

// program for simple intrest
// main function
int main()
{
	float p,r,t,i;    // variables 
	cout<<"ENTER PRINCIPLE AMOUNT :";
	cin>>p;
	cout<<"ENTER RATE :";
	cin>>r;
	cout<<"ENTER TIME :";
	cin>>t;
	i=(p*r*t)/100;    // formula for solving simple intrest
	cout<<"SIMPLE INTREST :"<<i;
	return 0;
}