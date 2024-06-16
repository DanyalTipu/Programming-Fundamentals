#include<iostream>
#include<cstring>
using namespace std;

char bubblesort(std[2][30],int size){
	for(int i=0;i<30-1;i++){
		int temp[30];
		for(int j=i+1;j<30;j++){
			if(strcmp(std[i],std[j])>0){
				strcpy(temp,std[i]);
				strcpy(std[i],std[j]);
				strcpy(std[j],temp);
			}
		}
	}
	for(int i=0;i<30;i++)
	cout<<std[i];
}

int main(){
	int s;
	int size=3
	char std[size][30]={"ali","sami","jamshed"};
	for(int i=0;i<size;i++)
	cout<<std[i];
	
	cout<<"enter 1 for selection sort";
	cin>>s;
	if(s==1)
	selsort(std);


	}

	

