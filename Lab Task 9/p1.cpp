#include<iostream>
using namespace std;
int main(){
	int row,col;

int matrix1[50][50];
int matrix2[50][50];
cout<<"emter size of rows and columns ";
cin>>row>>col;
cout<<"enter matrix 1";
for(int i=0;i<row;i++){
	for(int j=0;j<col;j++)
	cin>>matrix1[i][j];
}
for(int i=0;i<row;i++){
	cout<<endl;
	for(int j=0;j<col;j++)
	cout<<matrix1[i][j];

}
cout<<"enter matrix 2";
for(int i=0;i<row;i++){
	for(int j=0;j<col;j++)
	cin>>matrix2[i][j];
}
for(int i=0;i<row;i++){
	cout<<endl;
	for(int j=0;j<col;j++)
	cout<<matrix2[i][j];

}
cout<<endl;
	cout<<"matrix1 - matrix 2 is";
for(int i=0;i<row;i++){
	cout<<endl;

	for(int j=0;j<col;j++){
		cout<<matrix1[i][j]-matrix2[i][j];
		
	}
}


}
