#include<iostream>
using namespace std;

int main(){
	
	float num,sum=0;
	float y=1,i=1;
	cout<<"enter number ";
	cin>>num;
	
	while(i<=num){
		
		
		sum=sum+y*(4/i);
		y=-y;
		
		i=i+2;
	
	
	}
	cout<<sum;
}
