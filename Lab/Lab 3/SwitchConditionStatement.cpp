#include <iostream>
using namespace std;



int main(){
	
	int a,b;
	cout<<"Enter a two numbes: ";
	cin>>a>>b;
	
	int option;
	cout<<"Enter your operation u want to perfrom from following \n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Divide";
	cout<<endl;
	cin>>option;
	
	switch (option){
		case 1:
			cout<<"Addition of Numbers is: "<<a+b;
			break;
		case 2:
			cout<<"Subtraction of Numbers is: "<<a-b;
			break;
		case 3:
			cout<<"Multiplication of Numbers is: "<<a*b;
			break;
		case 4:
			cout<<"Divition of Numbers is: "<<a/b;
			break;
		default:
			cout<<"Select the valid option";
	}
	
	return 0;
}
