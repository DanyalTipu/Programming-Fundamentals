#include<iostream>
using namespace std;

int pal(int a);

int main(){

int num;
cout<<"enter number";
cin>>num;
if(num==pal(num))
cout<<"yes";
if(num!=pal(num))
	cout<<"no";


system("pause");
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