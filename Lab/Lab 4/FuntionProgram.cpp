#include <iostream>

using namespace std;

bool isAramstrong(int val){
	
	int len=0;
	int no=val;
	
	while(no!=0){
		
		no%10;
		len++;
		no=no/10;
	}
   int sum=0;
   int num=val;
   while(num!=0){
   	  int lastdigit=num%10;
   	  int temp=1;
   	  for(int i=0;i<len;i++){
   	  	      temp*=lastdigit;
	 }
	 num=num/10;
	 sum+=temp;
   	  
   }
   if(val==sum){
   	  return true;
   }
   
   return false;
	
}


int main(){
	
	int start,end;
//int no;
	cout<<"Enter a range for which you want to calculate Aramstrong Number: ";
	cin>>start>>end;
//cin>>no;
     for(int i=start;i<end;i++){
       
       	if(isAramstrong(i)){
	    cout<<i<<" is a Aramstrong Number"<<endl;	
	}
     
	 }

	return 0;
	
	
	
}
