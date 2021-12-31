/*#include<iostream>
#include<conio.h>
using namespace std;
void lcm(int,int);
 
int main()
{
    int p,q;
    
    cout<<"Enter two numbers: ";
    cin>>p;
    cin>>q;
    lcm(p,q);
    getch();
 
}
 
 
void lcm(int p,int q)
{
    int i,j;
 
    i=p;
    j=q;
 
    while(i!=j)
    {
	if(i < j)
	{
	i=i+p;
	}
	else
	{
	    j=j+q;
	    }
    }
 
    cout<<"\nL.C.M of  two number p="<<p<<" and q="<<q<<" is "<<i;
}*/
#include<iostream>

using namespace std;

int a,b;

int gcd(int a,int b)
{
	if(a==0){
		return b;
	return gcd(b%a ,a);
	}
}

int lcm(int a,int b)
{
	cout<<"\nL.C.M of  two number a="<<a<<" and b="<<b<<" is "<<;
	return (a*b)/gcd(a,b);			
}

int main ()
{
	cout<< "Enter two numers to find their LCM";
	cin >> 	a >> b;
	lcm(a,b);
}

