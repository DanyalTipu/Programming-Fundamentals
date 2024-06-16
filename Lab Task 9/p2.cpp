#include<iostream>
using namespace std;


int main(){
	int search,flag=0;
	cout<<"enter the number to be searched";
	cin>>search;
	
	
	int arr[8]={9,55,60,81,49,66,49,10};
	
	for(int i=0;i<8;i++){
		if(search==arr[i]){
		
		cout<<"value"<<search<<"is on index "<<i;
		flag=1;
		break;
	}
	
	
	
	
}
if(flag==0)
cout<<"not found";


}
