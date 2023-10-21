#include <iostream>
using namespace std;


int main(){
	
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	
	if(age>=18){
		cout<<"Your are Eligible for voting"<<endl;
	}else {
		cout<<"Your are not eligible for voting"<<endl;
	}
	return 0;
	
	
}
