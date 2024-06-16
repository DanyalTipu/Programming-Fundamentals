#include<iostream>
using namespace std;

int main(){

int num,n,add=0;
cout<<"number enter = ";
cin>>num;
for(n=1;n<=num;n++){
	if((n%2)!=0){
		add=add+n;
		
		cout<<n<<"\t";
}
}
	cout<<"\nsum of odd numbers "<<add;
	system("pause");
	return 0;

}