#include<iostream>
using namespace std;

int main(){
int num[5];
int num1,num2,sum=0,flag=1;

for(int i=0;i<5;i++)
	cin>>num[i];

cout<<"enter number 1 ";
cin>>num1;

cout<<"enter number 2 ";
cin>>num2;
sum=num1+num2;

for(int i=0;i<5;i++){
    if(sum==num[i]){
		cout<<"index "<<i;
		flag = 0;
	}

}
	if(flag==1)
	cout<<"sum not present";

system("pause");

}
