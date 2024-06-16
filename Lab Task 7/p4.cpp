#include<iostream>

using namespace std;

void fibon(){
	
	static int c, a=0,b=1;
	int temp=1;
		
	cout<<c;
	


	c=a+b;
	a=b;
	b=c;
	
	
	 
	
}

int main(){
	
	int num,t=1,c=1;
	
	cout<<"enter number ";
	cin>>num;
	
	
	for(int i=1;i<=num;i++){
	
	
	fibon();
	if(c==1){
	
	cout<<t;
	c=0;
}
}
	
}
