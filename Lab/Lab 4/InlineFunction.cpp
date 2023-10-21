#include <iostream>
using namespace std;

inline int square(int val) {
  return(val*val);
}

int main(){
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	cout<<"Square of Number is: "<<square(n);
	return 0;
}

