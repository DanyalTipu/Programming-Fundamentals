#include<iostream>
using namespace std;
void numbers(string s);
int main(){
	
	string s("He451y");
	numbers(s);
	
}
void numbers(string s){
	int arr[3];
	int sum=0;
	int num=0;
	for(int i=0;i<s.length();i++){
		if(!(s[i]>=65&&s[i]<=122)){	
    	num=int (s[i]);
    	if(num>=48&&num<=57)
    	sum+=(num-48);
    	
    	
    	
	}
	
	


	}
	cout<<sum;


	
	
}
