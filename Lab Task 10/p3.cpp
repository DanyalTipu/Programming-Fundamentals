#include<iostream>
using namespace std;
int main(){


string s("124382");
string s2("%");

for(int i=0;i<s.length()-1;i++){
	if(int (s[i])%2==0&&int (s[i+1])%2==0){
		s.insert(i+1,s2);
	}

}
cout<<s;

}

