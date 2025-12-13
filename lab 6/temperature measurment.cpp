#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"Enter the temperature";
	cin>>temp;
	if(temp>40)
	{cout<<"stay indoor because it is extremely hot and could be dangerous to health";
	}
	else if(temp>=30 && temp<=39)
	{
		cout<<"drint plenty of water to stay hydrated in the hot weather";
	}
	else if(temp>=20 && temp<=29)
	{cout<<"the weather is pleasent and suitable for outdoor activities";
	}
	else
	{cout<<"wear warm clothes to stay comfortable in the cooler weather";
	}
	return 0;
}
