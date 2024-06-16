#include<iostream>
#include<cmath>
using namespace std;
float fac(int f);

int main(){
	float x,num,fact=0,sum=0;
	cout<<"enter x"<<endl;
	cin>>x;
	cout<<"enter num";
	cin>>num;
	
	for (int i=1;i<=num;i++){
		
		
		sum+=(pow(x,i)/fac(i));
		
	}
	cout<<sum-1;
	
}
float fac(int f){
	
	if(f<=1)
	return 1;
	else
	return f*fac(f-1);
	
	
}
