//find multiplicarion of digits of integer value
#include<iostream>

using namespace std;

int main()
{
	int n,mul=1,a;
	cout<<"Enter digit: ";
	cin>>n;
	
	while(n!=0){
		a = n%10;
		mul = mul * a;
		n = n/10;
	}
	cout<<"NUMBER = "<<mul<<endl;
}
