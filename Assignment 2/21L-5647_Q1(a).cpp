#include<iostream>
using namespace std;

void triplet(int arr[],int size){
	int sum=0, max=0;
	sum=arr[0]+arr[1]+arr[2];
	max=sum;
	for(int i=1;i<size;i++){
		sum=arr[i]+arr[i+1]+arr[i+2];
		if(sum>max){
		
		max=sum;
	
	}
	}
	cout<<"max triplet sum = "<<max;
	cout<<endl;
	for(int i=0;i<size;i++){
		if(arr[i]+arr[i+1]+arr[i+2]==max)
		cout<<"values of max triplet = "<<arr[i]<<arr[i+1]<<arr[i+2];
	}
}



int main(){
	int arr[10]={3, 4, 5, 7, 6, 3, 2, 9, 1, 2};
	int size=10;
	
	triplet(arr,size);
}
