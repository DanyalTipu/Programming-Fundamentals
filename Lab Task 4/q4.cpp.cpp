#include<iostream>
using namespace std;

int main(){

int num,count=0,s,sum;

cout<<"enter number please =";
cin>>num;
for(count=0;count<=num;count++){

	s=count*count;
	sum=s+count;
	cout<<s<<" , ";


}

cout<<sum/num;
system("pause");

}