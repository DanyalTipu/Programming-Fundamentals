#include<iostream>
using namespace std;

int main(){

int num,count=0,s,sum=0,s2=0,s3;

cout<<"enter number please =";
cin>>num;
for(count=0;count<=num;count++){
	s2=s2+count;

	s=count*count;
	sum=s+sum;
}

s3=(s2)*s2;
cout<<s3<<"-"<<sum<<"= "<<s3-sum;
system("pause");

}