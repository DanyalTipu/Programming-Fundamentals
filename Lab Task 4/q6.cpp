#include<iostream>
using namespace std;

int main(){

int num,i,s;

cout<<"enter any number = ";
cin>>num;

for(i=1;i<=num;i++){
	if(num%i==0)
		cout<<i<<", ";

}

system("pause");
}