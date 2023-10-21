#include <iostream>

using namespace std;

class Outter{
	public:
		Outter(){
			cout<<"A is Called"<<endl;
			
		}
		void show(){
			cout<<"Show Function of A is called"<<endl;
		}
		
		class Inner{
			public:
				
				void show1(){
					cout<<"Show Function of B is called"<<endl;
				}
		};
};


int main(){
Outter a;
Outter* ptr=new (a.Inner);
ptr->show();


//Outter* ptr=a.Inner;
//ptr->Outter();
}
