#include<iostream>


using namespace std;

void swap(int &a,int &b){

a=a+b;
b=a-b;

a=a-b;





}

int main(){
	
	int a,b;
	cout<<"enter number ";
	cin>>a;
	cout<<"enter number 2  ";
	cin>>b;
		cout<<"number before swapping is  "<<a<<endl;
	cout<<"number 2 before swapping is "<<b<<endl;
	swap(a,b);

	cout<<"number 1 after swapping is "<<a<<endl;
	cout<<"number 2 after swapping is "<<b<<endl;
	system("pause");
}