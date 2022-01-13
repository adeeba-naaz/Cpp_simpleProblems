//mul of 2 num using pointers
#include<iostream>

using namespace std;

int main()
{
	int a,b,*p,*q;
	cout<<"Enter 2 numbers";
	cin>> a >> b;
	
	p = &a;
	q = &b;
	//r = &c;
	//*p**q;
	cout<<"Mul ="<<*p**q;
}
