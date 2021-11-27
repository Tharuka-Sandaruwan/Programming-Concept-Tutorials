//completed

#include<iostream>
#include<string.h>      //this library is used for counting the words.

using namespace std;

int main(){
	char str[1000] ;
	char *token;
	int count =0 ;
	
	cout << "What is the string you need to count words? \n" ;
	gets(str) ;                                                         // we use gets function to get the string input instead of cin.if we use cin,it will not get strings after spaces. 
	cout << "----------------------------------------------\n" ;
	

	token = strtok(str," ,.-") ;  // identify , . - space as word seperators.

	while(token != NULL){
		count++ ;
    	token = strtok (NULL, " ,.-");		
	}
	
	cout << "\nThere are "<< count << " words.\n" ;
	
	return 0 ;
	
}
