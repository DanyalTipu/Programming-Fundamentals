#include<iostream>
using namespace std;



int main(){
	char grid[10][10] = {
						{ 'T', 'N', 'E', 'M', 'N', 'G', 'I', 'S', 'S', 'A'},
						{ 'B', 'N', 'C', 'A', 'O', 'M', 'P', 'J', 'W', 'R'},
						{ 'C', 'L', 'A', 'R', 'I', 'F', 'Y', 'H', 'X', 'R'},
						{ 'L', 'O', 'S', 'C', 'T', 'G', 'H', 'C', 'E', 'V'},
						{ 'A', 'N', 'M', 'H', 'S', 'Y', 'S', 'T', 'E', 'M'},
						{ 'S', 'T', 'I', 'P', 'E', 'Q', 'N', 'A', 'F', 'E'},
						{ 'S', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 'M'},
						{ 'U', 'E', 'F', 'N', 'Q', 'T', 'G', 'Q', 'W', 'O'},
						{ 'D', 'K', 'R', 'O', 'W', 'T', 'E', 'N', 'K', 'R'},
						{ 'A', 'O', 'M', 'O', 'D', 'N', 'A', 'R', 'T', 'Y'},
						};
	char words[15][11]= {
							"COMPUTER",
							"QUESTION",
							"CLARIFY",
							"NETWORK",
							"SYSTEM",
							"CLASS",
							"SEQUENCE",
							"CATCH",
							"MEMORY",
							"RANDOM",
							"ASSIGNMENT",
							"MARCH",
							"SCANT",
							"SPEED",
							"ENTER"
						};



	cout<<"----------------------------";
	cout<<endl;
	for(int i=0;i<10;i++){
	
		for(int j=0;j<10;j++){
		cout<<grid[i][j]<<"  ";
	}
	cout<<endl;
	}
	
	cout<<endl;
	for(int i=0;i<15;i++){
		
		cout<<words[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<10;i++){
	for(int j=0;j<10;j++){
		for(int k=0;k<15;k++){
			if(grid[i][j]==words[k][0]){
				 if (grid[i-1][j] == words[k][1] && grid[i-2][j] == words[k][2] && grid[i-3][j] == words[k][3]&&grid[i-4][j] == words[k][4]){
				cout<<"the "<<words[k]<<"  found at "<<"( "<<i<<","<<j<<" )       direction 0";
				cout<<endl;
						}
				else if (grid[i - 1][j + 1] == words[k][1] && grid[i - 2][j + 2]==words[k][2] && grid[i-3][j+3]==words[k][3] && grid[i-4][j+4] == words[k][4]){
				cout<<"the "<<words[k]<<"  found at "<<"( "<<i<<","<<j<<" )       direction 1";					cout<<endl;
			}
		    	else if (grid[i][j + 1] == words[k][1] && grid[i][j + 2] == words[k][2] && grid[i][j + 3] == words[k][3]&&grid[i][j+4]==words[k][4]){
		    	cout<<"the "<<words[k]<<"  found at "<<"( "<<i<<","<<j<<" )       direction 2";
				cout<<endl;
					}
		
	         	else if (grid[i + 1][j + 1] == words[k][1] && grid[i + 2][j + 2] == words[k][2] && grid[i + 3][j + 3] == words[k][3]&& grid[i+4][j+4] == words[k][4]){
			    cout<<"the "<<words[k]<<"  found at "<<"( "<<i<<","<<j<<" )       direction 3";
		 		cout<<endl;
							}
		    	else if (grid[i+ 1][j ] == words[k][1] && grid[i +2][j ] == words[k][2] && grid[i +3][j  ] == words[k][3]&& grid[i +4][j ] == words[k][4]){
				cout<<"the "<<words[k]<<"  found at "<<"( "<<i<<","<<j<<" )       direction 4";
				cout<<endl;
		           	}
			    else if (grid[i +1][j -1] == words[k][1] && grid[i +2][j -2] == words[k][2] && grid[i +3][j -3] == words[k][3]&& grid[i +4][j -4] == words[k][4]){
				cout<<"the "<<words[k]<<"  found at "<<"( "<<i<<","<<j<<" )       direction 5";
				cout<<endl;
			}
			    else if (grid[i][j -1] == words[k][1] && grid[i][j- 2] == words[k][2] && grid[i][j- 3] == words[k][3]&& grid[i][j- 4] == words[k][4]){
				cout<<"the "<<words[k]<<"  found at "<<"( "<<i<<","<<j<<" )       direction 6";
				cout<<endl;
			}
		    	else if (grid[i-1][j -1] == words[k][1] && grid[i- 2][j- 2] == words[k][2] && grid[i- 3][j- 3] == words[k][3]&& grid[i- 4][j- 4] == words[k][4]){
				cout<<"the "<<words[k]<<"  found at "<<"( "<<i<<","<<j<<" )       direction 7";
				cout<<endl;
			}
		
							
			
			
		}
	
	}	
	}
}
}

