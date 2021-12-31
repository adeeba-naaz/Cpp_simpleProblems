//Take values of length and breadth of a rectangle from user and check if it is square or not.
#include<iostream>

using namespace std;


int main()
{
	int a,b;
	std::cout<<"Enter length and breadth: ";
	std::cin>> a >> b;
	
	if(a==b){
		cout<<"It is a square";
	}
	else{
		cout<<"It is a Rectangle";
	}
return 0;

}



