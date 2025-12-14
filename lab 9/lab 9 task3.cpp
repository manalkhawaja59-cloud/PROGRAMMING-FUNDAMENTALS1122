#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter an number:"<<endl;
	cin>>a;
	int i=1;
	while(i>0)
	{
		cout<<a<<i<<endl;
	}
	while(i<=0)
	{
		cout<<"you entered invalid number."<<endl;
		cout<<"enter a positive number."<<endl;}
}