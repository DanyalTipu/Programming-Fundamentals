#include<iostream>
using namespace std;

int main(){
	int num,j;
	bool isprime=true;
	cout<<"number = ";
	cin>>num;
	
	for(int i=2;i<=num;i++){
		if(num%i==0){
			isprime=true;
			for( j=2;j<i;j++){
				if(i%j==0)
				isprime=false;
				
			
			
			}
			if(isprime==true)
			cout<<i;
			cout<<endl;
		}
		
		
	}
	
}
