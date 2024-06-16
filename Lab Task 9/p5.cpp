#include<iostream>
using namespace std;

int main(){
	
	char str[9]="PaKIStAN";
	
	for(int i=0;i<9;i++){
		if(str[i]>64&&str[i]<91){
		str[i]=str[i]+32;
	cout<<str[i];
	continue;	
	}
	
	 if(str[i]>96&&str[i]<123){
		str[i]=str[i]-32;
		cout<<str[i];
		continue;
		
	}
}

//for(int i=0;i<8;i++)
//cout<<str[i];
	
}
