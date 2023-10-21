#include <iostream>

using namespace std;


class A{
	public:
		A(){
			cout<<"Constructor of A is called"<<endl;
		}
		~A(){
		 cout<<"Constructor of A is called"<<endl;
		}
};

class B{
	public:
		B(){
			cout<<"Constructor of B is called"<<endl;
		}
		~B(){
		 cout<<"Destructor of B is called"<<endl;
		}
};
class C:public A,public B{
	public:
		C(){
			cout<<"Constructor of C is called"<<endl;
		}
		~C(){
		 cout<<"Destructor of C is called"<<endl;
		}
};

int main(){
	C c;
	return 0;
}

