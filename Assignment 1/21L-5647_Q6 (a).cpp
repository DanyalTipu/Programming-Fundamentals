#include<iostream>

using namespace std;

int main(){
	
	int i,j,num,b=1;
	cout<<"enter number = ";
	cin>>num;
	
	
	for(int i=1;i<=num*2;i++){
		
		for(j=num*2;j>=i;j--)
		cout<<" ";
		
		
		for(int k=1;k<=i;k++){
		if(i%2!=0){
		
		cout<<"*";
		cout<<" ";
	}
	
	}
		b++;

		
	
		cout<<"\n";
	
	}
	
	
	

	
}
