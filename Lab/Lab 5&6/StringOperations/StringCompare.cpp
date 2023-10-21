#include <iostream>
using namespace std;

int length(char* p)
{
	int len=0;
	while(*p!='\0')
	{
		len++;
		p++;
		
	}
	return len;

}

bool compare(char* str1,char* str2){
	
	while(*str1!='\0'){
		if(*str1!=*str2){
			return false;
		}
		str1++;str2++;
	}
	
	return true;
}
int main(){

	char ch[50];
	char ch1[50];
	
	cout<<"Enter a strings: ";
	cin>>ch>>ch1;
	 int len1=length(ch);
	 int len2=length(ch1);
	 bool isSame;
	 if(len1!=len2){
	 	cout<<"Strings are not same"<<endl;
	 }else{
	 	 isSame=compare(ch,ch1);
	 	 if(isSame){
	 	cout<<"Strings are same"<<endl;
	 }else{
	 	cout<<"Strings are not same"<<endl;
	 }
	 }
	 
	 
	 
	return 0;
	
	
	
	
}
