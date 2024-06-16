#include<iostream>
using namespace std;

int main(){
	int arr[5]={0};
int  max=0,min=0;
for(int i=0;i<5;i++)
	cout<<arr[i];
for(int i=0;i<5;i++)
	cin>>arr[i];
max=arr[0];
for(int i=0;i<5;i++){
	if(max<arr[i])
		max=arr[i];
}
min=arr[0];
for(int i=0;i<5;i++){
	if(min>arr[i])
		min=arr[i];

}
cout<<"max is "<<max;
cout<<"min is "<<min;

system("pause");

}
