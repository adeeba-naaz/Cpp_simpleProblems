#include<iostream>

using namespace std;

int main()
{
	int arr[4];
	
	for(int i=0;i<=3;i++)
	{
		
		cout<<"enter element"<<i<<endl;
		cin>> arr[i];
	
	}
	
	int s=0,e=4-1;
	while(s<e)
	{
	
	swap(arr[s],arr[e]);
	s++;
	e--;

  }
  for(int i=0;i<=3;i++){
	cout<< arr[i]<<"\n";	
}
}
