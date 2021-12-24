//C++ Program to Find the Number of Vowels, Digits, Consonants and White Spaces in a String
#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char words[500];
	int i;
	int vowels=0,consonants=0,spaces=0,digits=0;
	cout<<"Enter a sentence"<<endl;
	gets(words);
	for(i=0;words[i]!='\0';++i){
		if(words[i] == 'a' || words[i] == 'e' || words[i] == 'i' || words[i] == 'o' || words[i] == 'u' || words[i]=='A' || words[i]=='E' || words[i]=='I' || words[i]=='O' || words[i]=='U'){
			++vowels;
		}
		else if((words[i]>='a' && words[i]<='z')||(words[i]>='A' && words[i]<='Z')){
			++consonants;
		}
		else if(words[i]>='0' && words[i]<='9'){
			++digits;
		}
		else if(words[i]==' '){
			++spaces;
		}
	}
	cout<<"Total no. of vowels are: "<<vowels<<endl;
	cout<<"Total no. of consonants are: "<<consonants<<endl;
	cout<<"Total no. of digits are: "<<digits<<endl;
	cout<<"Total no. of spaces are: "<<spaces<<endl;

}
