#include <iostream>
using namespace std;

int main(){
	double num,a,c=0,d;
	int i=1;
	cout<<"enter number for series ";
	cin>>num;
	
	while(i<=num){
		if(i%2==0)
		{c=c -1/float(i);
	
		    
		}
		else
		{c=c+ 1/float(i);
		  
		}
		i++;
		
	}
	cout<<c;
}
