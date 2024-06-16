#include<iostream>
using namespace std;

int main(){
	
	int number;
	cin>>number;
	
	for(int i=0;i<number;i++){
		
		for(int j=0;j<number;j++){
			
			if(i==j)
			cout<<i-j;
			if(j>i)
			cout<<j-i;
			if(j<i)
			cout<<i-j;
		}
		cout<<endl;
	}
	
	
}
