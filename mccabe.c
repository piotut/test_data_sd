#include <stdio.h>

int main(){

	int maxValue = m[0][0];         
	for (int i = 0; i < N; i++) 
	{               
    	for (int j = 0; j < N; j++) 
    	{                    
        	if ( m[i][j] >maxValue )        
        	{                 
            	maxValue = m[i][j];     
        	}                     
    	}                    
	}                             

	int sum = 0;                
	for (int i = 0; i < N; i++)     
	{                   
		for (int j = 0; j < N; j++)     
		{                    
		    sum = sum + m[i][j];            
		}                    
	}
}
