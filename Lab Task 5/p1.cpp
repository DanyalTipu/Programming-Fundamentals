#include <iostream>
using namespace std;

int main(){
	
	int num,mod;
	
	cout<<"enter number please = "<<endl;
	cin>>num;
	
	while(num!=0){
		mod=num%10;
		num=num/10;
		
		if(mod==0)
		cout<<"zero";
			else if(mod==1)
		cout<<"one";
			else if(mod==2)
		cout<<"two";
			else if(mod==3)
		cout<<"three";
			else if(mod==4)
		cout<<"four";
			else if(mod==5)
		cout<<"five";
			else if(mod==6)
		cout<<"six";
			else if(mod==7)
		cout<<"seven";
			else if(mod==8)
		cout<<"eight";
			else 
		cout<<"nine";
		
	}
	system("pause");
	return 0;
	
}

