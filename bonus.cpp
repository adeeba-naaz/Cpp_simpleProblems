/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/
#include<iostream>
int main()
{
	using namespace std;
	int a,b;
	cout<<"Enter your salary amount";
	cin>>a;
	cout<<"Enter your year of service ";
	cin>>b;
	
	if(b>5){
		cout<<"the net bonus amount is: "<<a*0.05;
	}
	else{
		cout<<"No net bonus amount";
	}
}


