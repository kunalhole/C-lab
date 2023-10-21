#include <iostream>
using namespace std;


int main(){
	
	int size;
	cout<<"Enter a size of an array: ";
	cin>>size;
	
	int arr[size];
	
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	int* ptr[size];
	
	for(int i=0;i<size;i++){
		ptr[i]=&arr[i];
	}
	
	for(int i=0;i<size;i++){
		cout<<*ptr[i]<<" ";
	}
	
	return 0;
}
