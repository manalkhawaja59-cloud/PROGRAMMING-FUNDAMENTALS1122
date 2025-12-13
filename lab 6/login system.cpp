#include<iostream>
using namespace std;
int main(){
	string username;
	string password;
	cout<<"Enter usename";
	cin>>username;
	cout<<"Enter password";
	cin>>password;
	if(username=="admin"&&password=="12345")
	{cout<<"Access granted";
	}
	else if(username=="admin"&&password!="12345")
	{cout<<"wrong password";
	}
	else{cout<<"user not found";
	}
	return 0;
}
