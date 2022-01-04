//find sum of digits of integer
#include<iostream>

using namespace std;

int main()
{
	int n,sum=0,a;
	cout<<"Enter digit: ";
	cin>>n;
	
	while(n!=0){
		a = n%10;
		sum = sum + a;
		n = n/10;
	}
	cout<<"total sum = "<<sum<<endl;
}
