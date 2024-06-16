#include<iostream>

using namespace std;

int main(){
	
	int i,j,k,num,num2,b=1,l,m,n,o;
	cout<<"enter number = ";
	cin>>num;
	
	num2=num;
	for(i=1;i<=num*2-2;i++){
		
		for(j=num*2;j>=i;j--)
		cout<<" ";
		
		
		for(k=1;k<=i;k++){
		if(i%2!=0){
		
		cout<<"*";
		cout<<" ";
	}
	}
		

		
	
		cout<<endl;
	
	}
	
		for(l=num*2-1;l>=0;l--){
		
		for(m=num*2;m>=l;m--)
		cout<<" ";
		
		
		for(n=1;n<=l;n++){
		if(l%2!=0){
		
		cout<<"*";
		cout<<" ";
		
	}
	}
		

		
	
		cout<<endl;
	
	}
	
	
	

	
}
