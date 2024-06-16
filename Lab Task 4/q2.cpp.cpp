#include<iostream>
using namespace std;

int main(){

int n1,n2,count,sum=0;

cout<<"enter number 1 and 2 ="<<endl;
cin>>n1>>n2;

for(count=1;count<=n1;count++){
	if(count<=n2){
		
		sum=sum+n1;
	}
}
cout<<sum;
system("pause ");
return 0;
}