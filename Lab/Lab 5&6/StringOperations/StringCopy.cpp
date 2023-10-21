#include <iostream>
using namespace std;

void copy(char* p,char* q)
{
	
	while(*p!='\0')
	{
	*q=*p;
	p++;
	q++;
		
	}
	

}

int main(){
	
	char ch[10];
	char ch1[10];
    cin>>ch;
    cout<<"String in str1 is: "<<ch<<endl;
	copy(ch,ch1);
	cout<<"String in str2 is: "<<ch1<<endl;
	return 0;
	
}
