#include<iostream>
using namespace std;

int main(){
	int x,y,x1,y1;
	float m;
	cout<<"enter coordinate 1 "<<endl;
	cin>>x>>y;
	cout<<"enter coordinate 2"<<endl;
	cin>>x1>>y1;
	m=(y1-y)/(x1-x);
	cout<<"linear equation is"<<endl;
	cout<<"y = "<<m<<"*x+c";
}
