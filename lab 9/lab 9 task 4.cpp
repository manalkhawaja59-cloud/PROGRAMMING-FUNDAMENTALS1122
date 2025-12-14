#include<iostream>
using namespace std;
int main()
 {
    cout<<"Sum of first 5 natural numbers: ";
    int sum=0,n=1;
    while(n<=5)
	 {
        sum+=n;
        ++n;
    }
   cout << sum <<endl;
    return 0;
}
