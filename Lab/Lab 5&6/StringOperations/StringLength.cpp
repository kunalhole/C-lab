#include <iostream>
using namespace std;

void length(char* p)
{
	int len=0;
	while(*p!='\0')
	{
		len++;
		p++;
		
	}
	cout<<"Length of String is: "<<len;

}

int main(){
	
	char ch[10];
	cout<<"Enter your name: ";
	cin>>ch;
	length(ch);
	return 0;
	
}
