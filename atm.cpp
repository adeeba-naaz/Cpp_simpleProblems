#include<iostream>
using namespace std;
int main()
  {
  	float amt,creditamt,debitamt;
    char ch	;
    int n;
    cout<<"Enter initial amount\n";
    cin>>amt;
    cout<<"Enter\nc  for credit\nd for debit\nb for balance\n";
    cin>>ch;
    switch(ch)
    {
    	case 'c':
    		cout<<"Enter credit amount\n";
    		cin>>creditamt;
    		amt=amt+creditamt;
    		cout<<"New Amount="<<amt;
    		break;
    	case 'd':
    		cout<<"Enter debit amount\n";
    		cin>>debitamt;
    		//int n;
    		
    		switch(n){
    		case 1:
    		debitamt <= amt;
			amt=amt-debitamt;
    		cout<<"New Amount="<<amt;
    		break;
    	    default:
    	    cout<<"Insufficient amount";
    		break;
    	    }
    	break;
    	case 'b':
    		cout<<"Amount in your account="<<amt;
    		break;
    	default:
    		cout<<"Invalid input!!";
	}
}
