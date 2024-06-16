#include<iostream>
using namespace std;

int main(){
	int num;
cout<<"enter natural number please =";
cin>>num;

switch(num%2==0){

	case 1:
		cout<<"even";break;
		
	case 0:
		cout<<"odd";break;

}
system ("pause ");
return 0;
}