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

	if(x<y){
		if(x<z)
			cout<<"Smallest Number: "<<x;
		else
			cout<<"Smallest Number:"<<z;
	}
	else
		if(y<z)
			cout<<"Smallest Number:"<<y;
		else
			cout<<"Smallest Number:"<<z;
	system("pause");


}