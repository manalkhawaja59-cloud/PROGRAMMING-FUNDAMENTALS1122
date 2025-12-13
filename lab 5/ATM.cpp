#include<iostream>
using namespace std;
int main()
{
	double balance,withdrawl;
	cout<<"enter your balance";
	cin>>balance;
	cout<<"enter the amount to withdraw";
	cin>>withdrawl;
	if(withdrawl<=balance)
	{balance=balance-withdrawl;
	cout<<"Transaction successful";
	cout<<"Remaining balance $:"<<balance<<endl;
	}
	else
	{
		cout<<"insufficient balance";
	}
	return 0;	
	
}
