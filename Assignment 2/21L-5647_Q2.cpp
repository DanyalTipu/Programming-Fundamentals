#include <iostream>
using namespace std;
void bigsum(int arr1[],int size);
//int arr1[25];
//int arr2[25];
void bigin(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	}
	void bigin2(int arr[],int size){
		for(int i=0;i<size;i++)
		cin>>arr[i];
	}	


int bigout1(int arr1[],int size){
	int count=0,count2=0,sum=0;
	int j=0,j2=0;
	
		for(int i=0;i<size;i++){
		if(arr1[i]==0)
		count++;
		else
		break;
	}
		for(int i=count;i<size;i++){
		arr1[j]=arr1[i];	
			j++;
	}
	cout<<"big  1 is = ";
	for(int i=0;i<size-count;i++)
	cout<<arr1[i];
	
	
}
	
int bigout2(int arr2[],int size){
	int count2=0,j2=0;
	int arr1[6];
		for(int i=0;i<size;i++){
		if(arr2[i]==0)
		count2++;
		else
		break;
	}
		for(int i=count2;i<size;i++){
		arr1[j2]=arr2[i];	
			j2++;
	}
	cout<<endl;
	cout<<"big  2 is = ";
	for(int i=0;i<size-count2;i++)
	cout<<arr1[i];
	cout<<endl;
	

}
void bigsum(int arr1[],int arr2[],int size){
	int arrsum[size+1];
	
	for(int i=size;i>0;i--)
	arrsum[i]=arr1[i]+arr2[i];
	
	cout<<"BIG1+BIG2=";
	for(int i=0;i<size;i++)
	cout<<arrsum[i];
	
	cout<<endl;


}

void bigsub(int arr1[],int arr2[],int size){
	int arrsub[size];
	
	for(int i=size;i>0;i--)
	arrsub[i]=arr1[i]-arr2[i];
	
	cout<<"BIG1-BIG2=";
	for(int i=0;i<size;i++)
	cout<<arrsub[i];


}











int main(){
	int size=10;
	int arr1[5];
	int arr2[size];
	int arrsum[size+1];
	
bigin(arr1,size);	
bigout1(arr1,size);
bigin2(arr2,size);
bigout2(arr2,size);
bigsum(arr1,arr2,size);
bigsub(arr1,arr2,size);

	
	
	
}
	


