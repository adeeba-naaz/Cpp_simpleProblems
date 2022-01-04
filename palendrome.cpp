//check number is palindrome or not
#include<iostream>

using namespace std;

int main()
{
	int n,num,rev=0,digit;
	cout<<"Enter number: ";
	cin>>num;
	n = num;
	while(num!=0){
		digit = num%10;
		rev = rev*10 + digit;
		num = num/10;
	}
	if(n == rev){
	cout<<"palendrome"<<endl;
	}
	else
	{
		cout<<"not palendrome"<<endl;

	}
	return 0;
}
