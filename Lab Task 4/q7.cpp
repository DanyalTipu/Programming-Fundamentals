#include<iostream>

using namespace std;

int main(){

char ch;
int n1,n2;
cout<<"enter number 1 and 2 =";
cin>>n1>>n2;
cout<<"enter operator = ";
cin>>ch;

switch(ch){
	
	case '+':
		cout<<n1+n2;
		break;
	case '-':
		cout<<n1-n2;
		break;
	case '*':
		cout<<n1*n2;
		break;
	case'/':
		cout<<n1/n2;
		break;
	
}
system("pause");

}