#include<iostream>
using namespace std;

int main(){
	
	int num,i=1,j=0,x=0,y=0,z=1;
	
	cout<<"enter width";
	cin>>num;
	
	while(i<=num){
		
		cout<<"*";
	i++;
	}
cout<<endl;

	while(j<num){
		if(j==0)
		cout<<"*";
		cout<<" ";
		if(j==num-3)
		cout<<"*";
		j++;
		
	}
	cout<<"\n";
		while(x<num){
		if(x==0)
		cout<<"*";
		cout<<" ";
		 if(x==num-3)
		cout<<"*";
		x++;
}
	cout<<"\n";
			while(y<num){
		if(y==0)
		cout<<"*";
		cout<<" ";
		 if(y==num-3)
		cout<<"*";
		y++;
}
cout<<endl;
	while(z<=num){
		
		cout<<"*";
	z++;
	}
	
	
	
	
	
	
}
