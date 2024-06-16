#include<iostream>
using namespace std;

int fac(int a){
	int fact=1;
	for(int i=1;i<=a;i++){
	fact=fact*i;
	
	}
	return fact;
}



int main(){
int x;
cout<<"enter number ";
cin>>x;

cout<<fac(x);
system("pause");



}