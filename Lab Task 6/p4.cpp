#include<iostream>

using namespace std;

int main(){
	
	int i,j,k,num,b=1;
	cout<<"enter number = ";
	cin>>num;
	
	
	for(i=1;i<=num;i++){
		
		for(j=num;j>=i;j--)
		cout<<" ";
		
		
		for(k=1;k<=i;k++){
		
		cout<<2*b;
		cout<<" ";
	}
		b++;

		
	
		cout<<endl;
	
	}
	
	
	

	
}
