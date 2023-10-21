#include <iostream>

using namespace std;

void swapNumbers(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	
	int a,b;
	cout<<"Enter a two Numbers: ";
	cin>>a>>b; 
	cout<<"Before Swapping "<<a<<" "<<b<<endl;
	swapNumbers(&a,&b);
	cout<<"After Swapping "<<a<<" "<<b<<endl;
	
	
	
}
