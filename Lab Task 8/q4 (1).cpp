#include<iostream>
using namespace std;

int main(){
	
	int arr[]={2,5,6,8,7,5,3,4,2,1};
	int size=3;
 int sub_array[size]={7,5,3},count=0;
	int first,second,third;
	
	for(int i=0;i<10;i++){
		if(sub_array[0]==arr[i])
		{
			first=i;
			for(int j=0;j<3;j++){
				if(sub_array[j]==arr[first+j]){
					count++;
				}
				
			}
			
			if(count==3)
			cout<<"subarray";
		}
		
	}
	

	
}
