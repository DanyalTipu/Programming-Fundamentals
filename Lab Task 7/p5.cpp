#include<iostream>
using namespace std;

int fac(int a){
	int fact=1;
	for(int i=1;i<=a;i++){
	fact=fact*i;
	
	}
	return fact;
}


int pal(int a){

int mod=0,rev=0,c ;


c=a;
while(a>0){
mod=a%10;
a=a/10;
rev=(rev*10)+mod;
}
if(c==rev)
	return c;
else
	return 0;


	

}

void fibon(){

static int c, a=0,b=1;
	int temp=1;
		
	cout<<c;
	


	c=a+b;
	a=b;
	b=c;	
	
	
} 

void swap(int &a,int &b){

a=a+b;
b=a-b;

a=a-b;





}
int main(){
	
	int num,i,j,c=1,t=1;
	cout<<"enter number 1 to 4";
	cin>>num;
	
	if(num==1){
		cin>>i;
		cout<<fac(i);
	}
	if(num==3){
		cin>>i;
		cout<<pal(i);
	}
	if(num==2){
		cin>>i;
		cin>>j;
			cout<<"number before swapping is  "<<i<<endl;
	cout<<"number 2 before swapping is "<<j<<endl;
	swap(i,j);

	cout<<"number 1 after swapping is "<<i<<endl;
	cout<<"number 2 after swapping is "<<j<<endl;
	system("pause");
	}
	if(num==4){
		cin>>i;
			for(int k=1;k<=num;k++){
	
	
	fibon();
	if(c==1){
	
	cout<<t;
	c=0;
}
}
	}
	
}


