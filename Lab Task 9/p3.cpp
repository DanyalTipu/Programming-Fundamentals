#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int count=0;
	
	int bond[2][5]={{1,2,3,4,5},
	{5,3,2,1,4}};
	int bonduser[2][5];
	
	for(int i=0;i<2;i++){
		int r;
		cout<<endl;
		r=(rand()%9)+1;
		for(int j=0;j<5;j++){
			r=(rand()%9)+1;
		bond[i][j]=r;
		cout<<	bond[i][j];
	}
	}
		for(int i=0;i<2;i++){
		for(int j=0;j<5;j++)
		cin>>bonduser[i][j];
	
	
}

for(int i=0;i<2;i++){
	for(int j=0;j<5;j++){
		if(bond[i][j]==bonduser[i][j]){
			count++;
		}
	}
}
if(count==10)
cout<<"you won";
else
cout<<"you loss by "<<10-count<<"identities" ;
}
