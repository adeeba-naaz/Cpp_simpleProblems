//print digits of integer value in reverse order 
#include<iostream>

using namespace std;

int main()
{
	int num,rev;
	cout<<"Enter a number";
	cin>>num;
	cout<<"The reverse order is: "<<endl;	

	do{
		rev = num%10;
		cout<<rev;
		num = num/10;
	}
	while(num!=0);
}
