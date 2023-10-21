#include <iostream>
using namespace std;


void fun(int& no)
{
	no++;
}
int main(){
	
  static int val;
  const int no=10;
  cout<<"Before Calling the function value of Static and const is "<<val<<" "<<no<<endl;
  
  fun(val);
 
 cout<<"Before Calling the function value of Static and const is "<<val<<" "<<no<<endl;

	return 0;
	
	
}
