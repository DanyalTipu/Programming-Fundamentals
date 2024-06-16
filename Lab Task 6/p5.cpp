#include<iostream>

using namespace std;

int main(){
	
	int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0;
	int num,i=0;
	
	cout<<"number ";
	cin>>num;
	
	while(num!=0){
		i=num%10;
		if(i==0)
		a10++;
		if(i==1)
		a1++;
		if(i==2)
		a2++;
		if(i==3)
		a3++;
		if(i==4)
		a4++;
		if(i==5)
		a5++;
		if(i==6)
		a6++;
		if(i==7)
		a7++;
		if(i==8)
		a8++;
		if(i==9)
		a9++;
		num=num/10;
		
		
		
		
	}
	cout<<a10<<a1<<a2<<a3<<a4<<a5<<a6<<a7<<a8<<a9;
	
}
