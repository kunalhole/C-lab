#include <iostream>
using namespace std;


class student
{
	int rollno;
	char name[10];
	
	
	public:
		void get()
		{
			cout<<"enter rollno\n";
			cin>>rollno;
			cout<<"enter student name\n";
			cin>>name;
			d.get();
		}
		void put()
		{
			cout<<rollno<<"-------"<<name<<"-----------"<<endl;
			d.put();
		}
		int getrollno()
		{
			return rollno;
		}
		char* getname()
		{
			return name;
		}
		void setrollno(int r)
		{
			rollno=r;
		}
		void setname(char* n)
		{
			strcpy(name,n);
		}
		
		
};
int main()
{
	student s[10],temp;
	int i,n,j;
	cout<<"enter value of n\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].get();
		
	}
	for(i=0;i<n;i++)
	{
		s[i].put();
		
	}
	cout<<"sort information\n";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].getrollno()>s[j].getrollno())
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++){
		s[i].put();
	}
	
	
	return 0;
}
