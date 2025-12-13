#include <iostream>
using namespace std;
int main()
{
	int age;
	string child,adult,teenager;
	cout<<"Enter age:";
	cin>>age;
	(age<13) ? cout<<"age"<<age<<"falls under the category:child":
		(age<=19) ? cout<<"age"<<age<<"falls under the category:teenager":
	cout<<"Age"<<age<<"falls under the category:adult";
	return 0; 
}