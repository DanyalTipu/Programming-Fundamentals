#include<iostream>
using namespace std;

int main(){
	
	unsigned long long int num, mod, rev=0, mod2;
	
	cout<<"enter decimal number to convert in binary"<<endl;
	cin>>num;
	
	for(;num>0;){
		mod=num%2;
		num=num/2;
		rev=(rev*10)+mod;
		
	}
	for(;rev>0;){
		mod2=rev%10;
		rev=rev/10;
		cout<<mod2;
	}
}
