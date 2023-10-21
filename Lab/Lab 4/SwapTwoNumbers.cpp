#include <iostream>
using namespace std;


void fun(int&a,int&b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	
	int a,b;
	cout<<"Enter a two number you want to Swap: ";
	cin>>a>>b;
	cout<<"Before Swapping Numbers are: "<<a<<" "<<b<<endl;
	fun(a,b);
	cout<<"After Swapping Numbers are: "<<a<<" "<<b<<endl;
	return 0;
	
}
