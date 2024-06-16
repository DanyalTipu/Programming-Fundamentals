#include<iostream>
using namespace std;

int main(){
	
	int num,i,j,k,l;
	char ch;
	
	cout<<"enter number ";
	cin>>num;
	cout<<" pattern ";
	cin>>ch;
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
		
		cout<<ch;
	}
		cout<<endl;
	
	}
		for(k=2;k<=num;k++){
		for(l=num;l>=k;l--)
		cout<<ch;
		cout<<endl;}
	}



