#include<iostream>
using namespace std;

int main(){
	
	unsigned long long int num , mod;
	
	cout<<"enter number for reverse ";
	cin>>num;
	
	while(num>0){
		
		mod=num%10;
		num=num/10;
		cout<<mod;
	}
}
