//print first and last digit of integer value
#include<iostream>

using namespace std;

int first(int n){
	while(n>=10){
		n = n/10;
	}
	return n;
}

int last(int n){
		return (n%10);
	
}


int main()
{
	int n;
	cout<<"Enter digit: ";
	cin>>n;
	
	cout<< "first digit" <<first(n)<<endl;
	cout<< "last digit"<<last(n)<<endl;
	return 0;
}


