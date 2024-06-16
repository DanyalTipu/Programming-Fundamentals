#include<iostream>
using namespace std;
int main(){
int x,c=0;
int num[11]={1,1,2,4,2,3,4,5,6,6,6};
cout<<"enter value for frequency";
cin>>x;

for(int i=0;i<9;i++){
	if(x==num[i])
	c++;
}
cout<<"the number "<<x<<"is "<<c<<"times in array";











}

