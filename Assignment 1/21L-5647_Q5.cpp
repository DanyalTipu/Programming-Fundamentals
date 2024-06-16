#include<iostream>
using namespace std;

int main(){
	
	int num,k=2,flag=0,j;
	bool isprime=true;
	cout<<"enter number "<<endl;
	cin>>num;
	
	while(k<num){
		if(num%k==0){
			flag=1;
			break;
			
		}
			else
		k++;
		
		
	}
	if(flag==0)
	cout<<"entered number is prime";
	else
		for(int i=2;i<=num;i++){
		if(num%i==0){
			isprime=true;
			for( j=2;j<i;j++){
				if(i%j==0)
				isprime=false;
				
			
			
			}
			if(isprime==true)
			cout<<i<<" ";
			
		}
	
	
}
}
