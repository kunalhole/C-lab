#include <iostream>

using namespace std;

void concat(char* str1,char* str2){
	
	while(*str1!='\0'){
		str1++;
	}
	
	while(*str2!='\0'){
		*str1=*str2;
		str2++;
		str1++;
	}
	
	
}


int main(){

	char ch[10];
	char ch1[20];
	
	cout<<"Enter a strings: ";
	cin>>ch>>ch1;
	cout<<"String before concatination: "<<ch<<endl;
	concat(ch,ch1);
	cout<<"String after concatination: "<<ch<<endl;
	return 0;
	
	
	
	
}
