// completed


#include<iostream>
#include<string.h>      //this library is used for changing the case. 

using namespace std;

int main(){
	
	char s[100] ;
	
	cout << "Enter the line of text below. \n" ;
	gets(s) ;
	

	cout << "__________________________\n" ;
	
	cout << "\nThe uppercase is:\n" ;
	cout << strupr(s) << endl ;    // in here it changes to uppercase

	cout << "\nThe lowercase is:\n" ;
	cout << strlwr(s) << endl ;      // in here it changes to the lowercase

	
}
