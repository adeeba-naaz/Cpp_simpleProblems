#include<iostream>

using namespace std;

int main()
{
	int arr[5];
	
	//cin>> arr[5];
	//cout<<arr[4]<<" "<<arr[3]<<" "<<arr[2]<<" "<<arr[1]<<" "<<arr[0];
	for(int i=0;i<=4;i++){
		cin>>arr[i];
		//cout<<arr[i]<<" ";
	}	
	
	for(int j=4;j>=0;j--){
		cout<<arr[j]<<" ";

	}
	
}
