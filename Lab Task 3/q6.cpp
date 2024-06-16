#include<iostream>
using namespace std;

int main(){
	int x,y,z;

	cout<<"Enter number1: "<<endl;
	cin>>x;
	cout<<"Enter number2: "<<endl;
	cin>>y;
	cout<<"Enter number3: "<<endl;
	cin>>z;

	if (x > y && x > z)
		cout << " Largest Number is  " << x;

	else if (y > z && y > x)
		cout << " Largest Number is  " << y;

	else
		cout << "Largest number is "<<z;
	
	system("pause");


}