#include<iostream>
using namespace std;

int main(){
	int count=0;
	
	char correct[20]={'B','D','A','A','C','A','B','A','C','D','B','C','D','A','D','C','C','B','D','A'};
	char user[20];
	
	for(int i=0;i<20;i++){
		cin>>user[20];
	}
	
	for(int j=0;j<20;j++){
		if(user[j]==correct[j])
		count++;
	}
	
	if(count>=18)
	cout<<"A";
	
	else if(count>=14)
	cout<<"B";
	
		else if(count>=10)
	cout<<"C";
	else if(count<10)
	cout<<"ap fail hain";
	
}

