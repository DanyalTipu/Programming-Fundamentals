#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
	int ran = (rand() % 4) ;
	int  r,c,r1,c1;
	char board[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	
	
	bool turn=true;
	while(turn==true){
		
		if(turn==true){
			cout<<"enter row index";
			cin>>r;
			if(r>=3){
				cout<<"enter again";
				continue;
			}
			cout<<"enter column index ";
			cin>>c;
				if(c>=3){
				cout<<"enter again";
				continue;
			}
			board[r][c]={'x'};
			

		cout<<endl;
			turn=false;
		}
	
		
		
		
		 if(turn==false){
			r1=ran;
			c1=ran;
			if(r1>3){
			
				ran = (rand() % 4) ;
				continue;
			}
			if(c1>3){
			ran = (rand() % 4) ;
			continue;
		}
			if(board[r1][c1]=='x'){
			ran = (rand() % 4) ;
			continue;
				
			}
			else
				board[r1][c1]={'o'};
				ran = (rand() % 4) ;
			
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++)
			cout<<board[i][j];
			cout<<endl;
	
}
				
			
turn=true;	
		
	}
	if(board[0][0]=='x'&&board[0][1]=='x'&&board[0][2]=='x')
	cout<<"player wins";
	else	if(board[1][0]=='x'&&board[1][1]=='x'&&board[1][2]=='x')
	cout<<"player wins";
	else	if(board[2][0]=='x'&&board[2][1]=='x'&&board[2][2]=='x')
	cout<<"player wins";
	else	if(board[0][0]=='x'&&board[1][0]=='x'&&board[2][0]=='x')
	cout<<"player wins";
	else	if(board[0][1]=='x'&&board[1][1]=='x'&&board[2][1]=='x')
	cout<<"player wins";
else	if(board[0][2]=='x'&&board[1][2]=='x'&&board[2][2]=='x')
	cout<<"player wins";
else	if(board[0][0]=='x'&&board[1][1]=='x'&&board[2][2]=='x')
	cout<<"player wins";
	
	
		if(board[0][0]=='o'&&board[0][1]=='o'&&board[0][2]=='o')
	cout<<"computer wins";
	else	if(board[1][0]=='o'&&board[1][1]=='o'&&board[1][2]=='o')
	cout<<"computer wins";
	else	if(board[2][0]=='o'&&board[2][1]=='o'&&board[2][2]=='o')
	cout<<"computer wins";
	else	if(board[0][0]=='o'&&board[1][0]=='o'&&board[2][0]=='o')
	cout<<"computer wins";
	else	if(board[0][1]=='o'&&board[1][1]=='o'&&board[2][1]=='o')
	cout<<"computer wins";
else	if(board[0][2]=='o'&&board[1][2]=='o'&&board[2][2]=='o')
	cout<<"computer wins";
else	if(board[0][0]=='o'&&board[1][1]=='o'&&board[2][2]=='o')
	cout<<"computer wins";
}
	
}
	

