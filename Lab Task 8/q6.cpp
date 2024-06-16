#include<iostream>
using namespace std;

int main(){
	int turn=1,initial1,initial2,pos1,pos2,i=7,j=4;
	int board[]={0,0,0,0,0,0,0,0,0};
	
/*	for(i=0;i<7;i++){
		if(board[i]==2)
		initial2=i;
		if(board[i]==1)
		initial1=i;
	}
	*/
	 board[4]=2;
	 board[7]=1;
	 board[i]=board[7];
	 board[j]=board[4];
	while(true){
		if(turn==1){
		turn=0;
		cout<<"enter player 1 position";
		cin>>pos1;
		if(pos1==4){
		board[i-1]=1;
//	board[i]=board[i-1];	
	board[i]=0;
	}
	
		if(pos1==6){
		board[i+1]=1;
		board[i]=0;
	}
		if(pos1==0){
		board[i]=1;
		
	}
	for(int k=0;k<9;k++)
cout<<board[k];

	
	}
	if(turn==0){
		turn=1;
		cout<<"enter player 2 position";
		cin>>pos2;
		if(pos2==4){
		board[j-1]=2;	
		board[j]=0;
	}
	
		if(pos2==6){
		board[j+1]=2;
		board[j]=0;
	}
		if(pos2==0){
		board[j]=2;
		
	}
	for(int l=0;l<9;l++)
cout<<board[l];
	
		
	}

	
}


}

