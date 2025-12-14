#include<iostream>
using namespace std;
int main()
{
	int a;\
	cout<<"Enter the value of a:"<<endl;
	cin>>a;
	int i=1;
	cout<<"multiplication table of "<<a<<endl;
	while(i<=10)
	{
		cout<<a<<"*"<<i<<"="<<a*i<<endl;
		i++;
	}
}