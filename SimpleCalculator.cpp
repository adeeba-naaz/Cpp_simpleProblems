//simple calculator program
#include<iostream>

using namespace std;

int main()
{
	float a,b;
	char sepecialsymbol;
	cout<<"Enter 2 numbers";
	cin>>a>>b;
		cout<<"Enter Operator";

	cin>>sepecialsymbol;
	{
		case '+':
			cout<<a+b<<endl;
			break;
		case '-':
			cout<<a-b<<endl;
			break;

		case '*':
			cout<<a*b<<endl;
			break;

		case '/':
			cout<<a/b<<endl;
			break;

		default:
			cout<<"Invalid Operator"<<endl;
			break;
			
	}
}
