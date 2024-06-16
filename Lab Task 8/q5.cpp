#include<iostream>
using namespace std;

int main(){
	int size =7,count=0,temp;
	int arr[size]={5,4,6,-11,-9,18,-7};
	

	for(int i=0;i<size;i++){
	
	if(arr[i]<0){
		temp=arr[count];
		arr[count]=arr[i];
		arr[i]=temp;
		count=count+1;
		
		
	}
	
}
for(int i=0;i<size;i++)
cout<<arr[i];

	
	
}
