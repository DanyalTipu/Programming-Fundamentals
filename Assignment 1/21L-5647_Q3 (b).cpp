#include<iostream>
using namespace std;

int main(){
	
	unsigned long int num, num2, rev=0, mod;
	
	cout<<"enter number please ";
	cin>>num;
	
	num2=num;
	
	while(num>0){
		mod=num%10;
		num/=10;
		rev=(rev*10)+mod;
		
		
	}
	if(num2==rev)
	cout<<"palindrome"<<endl;
	else
	cout<<"not palindrome"<<endl;
}
