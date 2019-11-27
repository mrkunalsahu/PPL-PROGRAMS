#include<iostream>
using namespace std;
int main()
{
	int s,i;
	cout<<"program for print square of 1 to 10 . nos : ";
	i=1;
	while(i<=10)
	{
  	s=i*i;
	  cout<<"square of : "<<i<<" :";
	  cout<<s<<endl;
	  i++;
	}
	return 0;
}