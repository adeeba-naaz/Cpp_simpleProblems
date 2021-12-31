//prog to write sum of first n natural numbers. prog should generatre error if entered negative num
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<0){
		cout<<"negative number"<<endl;
	}
	else{
		cout<<n*(n+1)/2<<" ";
	}
	return 0;
}

