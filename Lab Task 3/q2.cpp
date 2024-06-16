#include<iostream>
using namespace std;

int main(){
float score;
cout<<"Enter score = "<<endl;
cin>>score;

if(score>=90)
	cout<<"Your Grade:A+"<<endl;
else if(score<=89&&score>=80)
	cout<<"Your Grade:A"<<endl;
else if(score<=79&&score>=70)
	cout<<"Your Grade:B"<<endl;
else if(score<=69&&score>=60)
	cout<<"Your Grade:C"<<endl;
else if(score<=59&&score>=50)
	cout<<"Your Grade:D"<<endl;
else if(score<50)
	cout<<"Your Grade: F"<<endl;
system("pause");
return 0;

}
