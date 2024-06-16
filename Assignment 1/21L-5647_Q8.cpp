#include<iostream>
using namespace std;

int onedigit(int a){
	static int i=0;
	i=i+1;
	return i;
}


int threedigit(int a){
	int mod=0,sum=0;

	static int i=100;
	 int j=a;
	while(a>0){
		mod=a%10;
		a=a/10;
		sum=sum+(mod*mod*mod);	
		if(a==0){
				if(sum==j)
				
		return sum;
	else 
	return 0;

		}
			
	}
}
	int fourdigit(int a){
			int mod=0,sum=0;
	static int i=1000;
	 int j=a;
	while(a>0){
		mod=a%10;
		a=a/10;
		sum=sum+(mod*mod*mod*mod);	
		if(a==0){
				if(sum==j)
		return j;
	else
	return 0;
	}

		
		
	
	
}
}
int main(){
	
	int num;
	cin>>num;
	if(num>0&&num<10){
	
	for(int i=0;i<num;i++)
	cout<<onedigit(num);
}

if(num>0&&num<100){
	for(int i=0;i<9;i++)
	cout<<onedigit(num);
}
if(num>99&&num<1000){
for(int i=0;i<9;i++)
	cout<<onedigit(num);
	for(int j=100;j<=num;j++){
		cout<<threedigit(j);
	}
	
}
if(num>999&&num<10000){
	for(int i=0;i<9;i++)
	cout<<onedigit(num);
	for(int j=100;j<99;j++)
	cout<<threedigit(j);
	for(int k=1000;k<=num;k++)
	cout<<fourdigit(k);
	
}

}
