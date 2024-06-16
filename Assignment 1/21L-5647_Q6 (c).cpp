#include <iostream>

using namespace std;
int main()
{
    int rows,k,j;
    
    cout << "Enter the rows " ;
    cin>>rows;
    
    
    for(int i=0; i<=rows; i++){
        for(int j=i+1; j<=rows; j++){
		 
        cout<<" ";
    }
    for(int k=1; k<i+i; ){
    	
    
		
    	
            if(i==rows || k==(i+i)-1|| k==1){
            	
			
                cout<<"*";
                k++;
            }
            
            else if(i!=rows||k!=(i+i)-1){
			
                cout<<" ";
            k++;
        }
    
    }
    cout<<endl; 
    
    }
    
}
