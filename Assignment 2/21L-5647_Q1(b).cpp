#include<iostream>
using namespace std;

void triplet(int arr[],int size, int n){
int	sum2=arr[0]+arr[1];	
int	sum3=arr[0]+arr[1]+arr[2];
int	sum4=arr[0]+arr[1]+arr[2]+arr[3];
int	sum5=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
int	sum6=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5];
int	sum7=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6];
int	sum8=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6]+arr[7];
int	sum9=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6]+arr[7]+arr[8];
int 	max2=sum2;
int 	max3=sum3;
int 	max4=sum4;
int 	max5=sum5;
int 	max6=sum6;
int 	max7=sum7;
int 	max8=sum8;
int 	max9=sum9;
	if(n==3){
	
	for(int i=1;i<size;i++){
		sum3=arr[i]+arr[i+1]+arr[i+2];
		if(sum3>max3){
		
		max3=sum3;
	
	}
	}
	cout<<max3;
}


	else if(n==2){
	
	for(int i=1;i<size;i++){
		sum2=arr[i]+arr[i+1];
		if(sum2>max2){
		
		max2=sum2;
	
	}
	}
	cout<<max2;
}
else if(n==4){
	
	for(int i=1;i<size-4;i++){
		sum4=arr[i]+arr[i+1]+arr[i+2]+arr[i+3];
		if(sum4>max4){
		
		max4=sum4;
	
	} 
	}
	cout<<max4;
}
else if(n==5){
	
	for(int i=1;i<size-5;i++){
		sum5=arr[i]+arr[i+1]+arr[i+2]+arr[i+3]+arr[i+4];
		if(sum5>max5){
		
		max5=sum5;
	
	}
	}
	cout<<max5;
}
else if(n==6){
	
	for(int i=1;i<size-6;i++){
		sum6=arr[i]+arr[i+1]+arr[i+2]+arr[i+3]+arr[i+5]+arr[i+6];
		if(sum6>max6){
		
		max6=sum6;
	
	}
	}
	cout<<max6;
}
else if(n==7){
	
	for(int i=1;i<size-7;i++){
		sum7=arr[i]+arr[i+1]+arr[i+2]+arr[i+3]+arr[i+5]+arr[i+6]+arr[i+7];
		if(sum7>max7){
		
		max7=sum7;
	
	}
	}
	cout<<max7;
}

else if(n==8){
	
	for(int i=1;i<size-8;i++){
		sum7=arr[i]+arr[i+1]+arr[i+2]+arr[i+3]+arr[i+5]+arr[i+6]+arr[i+7]+arr[i+8];
		if(sum8>max8){
		
		max8=sum8;
	
	}
	}
	cout<<max8;
}

else if(n==9){
	
	for(int i=1;i<size-9;i++){
		sum9=arr[i]+arr[i+1]+arr[i+2]+arr[i+3]+arr[i+5]+arr[i+6]+arr[i+7]+arr[i+8]+arr[i+9];
		if(sum9>max9){
		
		max9=sum9;
	
	}
	}
	cout<<max9;
}








}



int main(){
	int n;
	int arr[10]={3, 4, 5, 7, 6, 3, 2, 9, 1, 2};
	int size=10;
	cout<<"enter n = ";
	cin>>n;
	
	triplet(arr,size,n);
}
