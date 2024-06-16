#include<iostream>
using namespace std;
int main(){

int n1,n2;
char ch;

cout<<"Enter number1: "<<endl;
cin>>n1;


cout<<"Enter number2: "<<endl;
cin>>n2;


cout<<"Enter operator: "<<endl;
cin>>ch;
if(ch=='+')
	cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
else if(ch=='-')
	cout<<n1<<"-"<<n2<<"="<<n1-n2;
else if(ch=='*')
	cout<<n1<<"*"<<n2<<"="<<n1*n2;
else if(ch=='/')
	cout<<n1<<"/"<<n2<<"="<<n1/n2;
system("pause");
return 0;



}