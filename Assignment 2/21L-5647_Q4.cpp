#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main(){
	string s;
	char check;
	char arr[6];
	
	char words[20][21] = {
						"apply",
						"application",
						"bat",
						"batch",
						"battle",
						"compute",
						"computer",
						"compare",
						"device",
						"develop",
						"developer",
						"function",
						"functional",
						"functionality",
						"handle",
						"handler",
						"handling",
						"system",
						"systemic",
						"systole"
						};
						
		char a=0;
	
		while(true){
		
			a=getch();
			for(int i=0;i<6;i++){
				arr[i]=a;
			}
		
			
			s=s+a;
			cout<<"<<<"<<s;
			for(int i=0;i<11;i++){
				if(s[0]=='a'){
				
			if(arr[i]==words[1][i]){
				if(arr[i]==words[0][i]){
					cout<<endl;
					cout<<words[0];
				}
				cout<<endl;
				cout<<words[1];
				
				break; 
			}
		}
	
		if(s[0]=='b'){
		
			 if(a==words[4][i])	{
				if(a==words[3][i]){
				 if(a=words[2][i]){
						cout<<endl;
						cout<<words[2];
					}
					cout<<endl;
					cout<<words[3];
					
				}
				cout<<endl;
				cout<<words[4];
				
				break;
			}
		}
	
			if(s[0]=='c'){
		
			if(a==words[7][i]){
				cout<<endl;
				cout<<words[7];
			}
				if(a==words[6][i]){
				cout<<endl;
				cout<<words[6];
			}
				if(a==words[5][i]){
				cout<<endl;
				cout<<words[5];
			}
			
		}
		
			if(s[0]=='d'){
		
			if(a==words[8][i]){
				cout<<endl;
				cout<<words[8];
			}
				if(a==words[9][i]){
				cout<<endl;
				cout<<words[9];
			}
				if(a==words[10][i]){
				cout<<endl;
				cout<<words[10];
				break;
			}
			
		}
			if(s[0]=='f'){
		
			if(a==words[11][i]){
				cout<<endl;
				cout<<words[11];
			}
				if(a==words[12][i]){
				cout<<endl;
				cout<<words[12];
			}
				if(a==words[13][i]){
				cout<<endl;
				cout<<words[13];
				break;
			}
			
		}
		
			if(s[0]=='h'){
		
			if(a==words[14][i]){
				cout<<endl;
				cout<<words[14];
			}
				if(a==words[15][i]){
				cout<<endl;
				cout<<words[15];
			
			}
				if(a==words[16][i]){
				cout<<endl;
				cout<<words[16];
				break;
			}
			
		}
			if(s[0]=='s'){
		
			if(a==words[17][i]){
				cout<<endl;
				cout<<words[17];
			}
				if(a==words[18][i]){
				cout<<endl;
				cout<<words[18];
			}
				if(a==words[19][i]){
				cout<<endl;
				cout<<words[19];
				break;
			}
			
		}
	else	if(a==13){
			system("cls");
			cout<<"enter pressed"<<endl;
			s="";
			break;
		}
		 if(a=='0')
		break;
		
	
		
		
			
		
			
	

		}
			cout<<endl;
			if(a=='0')
			cout<<"loop terminated";
			
	
	
	}
	
}
		
	
