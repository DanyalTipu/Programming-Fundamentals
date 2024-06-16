#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	
	unsigned long long int num, mod,binary=0, mod2,num2=0,sum=0;
	int b=0;
	cout<<"enter binary number "<<endl;
	cin>>num;
	
	for(;num>0;b++){
	
	mod=num%10;
		
	num=num/10;
		
	
	sum=sum+(mod*pow(2,b));
	
}
cout<<sum;
	

	



	

}

