#include <iostream>
using namespace std;


class Date{
    int d,m,y;
    
    public:
    	Date(){
    		cout<<"Default Constructor Called"<<endl;
		}
		Date(int d,int m,int y){
    		this->d=d;
    		this->m=m;
    		this->y=y;
		}
		
		void display(){
			cout<<d<<"/"<<m<<"/"<<y<<endl;
		}
		
		friend void operator+(Date&,int);
		friend void operator-(Date&,int);
};


void operator+(Date& obj1,int a){
	obj1.d=obj1.d+a;
	obj1.m=obj1.m+a;
	obj1.y+=a;
}

void operator-(Date& obj1,int b){
	obj1.d-=b;
	obj1.m-=b;
	obj1.y-=b;
}


int main(){
	
	
	int d,m,y;
	cout<<"Enter a value of day,month and year: ";
	cin>>d>>m>>y;
	Date obj1(d,m,y);
	obj1.display();
	obj1+1;
	obj1.display();
	obj1-1;
	obj1.display();
	return 0;
}
