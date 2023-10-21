#include<iostream>
using namespace std;


class emp
{
	int id, sal;
	public:
		getId()
		{
			cout<<"Enter Id : ";
			cin>>id;
		}
		
		virtual getSal() = 0;



		
};

class wageEmp: public emp
{
	int hrs, rate=100;
	public:
		friend void setRate(wageEmp &);
		getSal()
		{
			emp::getId();
			cout<<"Enter number of hours worked : ";
			cin>>hrs;
			int wageS = hrs*rate;
			cout<<"Salary for Wage Employee is : "<<wageS<<endl;
		}
};

void setRate(wageEmp &t)
{
	cout<<"Enter new rate : ";
	cin>>t.rate;
	int newS =t.rate*t.hrs;
	cout<<"New Salary is : "<<newS<<endl;
}
int main()
{
	wageEmp obj;
	obj.getSal();
	setRate(obj);
}
