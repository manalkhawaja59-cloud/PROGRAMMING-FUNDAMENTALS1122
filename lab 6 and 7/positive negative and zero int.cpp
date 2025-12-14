#include<iostream>
using namespace std;
int main ()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	if(num>0)
	cout<<"THE NUMBER IS POSITIVE";
    else if(num<0)
	 cout<<"THE NUMBER IS NEGATIVE";
    else{
    	cout<<"the number is zero";
	}
	 return 0;
    
}
