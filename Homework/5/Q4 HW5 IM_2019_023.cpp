#include<iostream>  


using namespace std;
  
//fibonacci series generating function
  
void fibgen(int n){    

    static int n1=0,n2=1,n3;  
	  
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
		cout <<" "<< n3 ;
		 
		 //recursing the fibgen function    
         fibgen(n-1);    
    }    
} 

   
int main(){   
    int n; 
    
	getn:  
	cout << "How many Fibonacci numbers needed ? \n"  ; 
	cin >> n ;
	   
	if (n < 1){
		cout << "Enter a value equal or greater than 1 ! \n";
		goto getn;		
	} 
	
	if (n == 1){
		cout << "Fibonacci Series is :  0 " ;
		return 0;
	}
	
	else{	
	cout << "Fibonacci Series is : " ;
	cout << "0 1" ;
	
	//calling the fibgen function.we are inputting n-2 as 0 and 1 are already displayed.
    fibgen(n-2);  
  
    return 0;
	}
 } 
