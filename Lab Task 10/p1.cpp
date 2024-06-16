#include<iostream>
#include<string>
using namespace std;
string reverse(string s);
	

int main(){
	string s="hello world";
	reverse(s);
	
	
}
string  reverse(string s){
	string rev;
	for(int i=s.length()-1;i>=0;i--){
		rev=rev+s[i];
	}
cout<<rev;

	
	
	
}
