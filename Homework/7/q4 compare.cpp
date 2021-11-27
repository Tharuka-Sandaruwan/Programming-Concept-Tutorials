//completed


#include<iostream>
#include<string.h>      //this library is used for comparing the strings.

using namespace std;

int main(){
	
	char str1[1000];
	char str2[1000];
	double result = 5 ;
	
	cout << "\nEnter the first string: \n" ;
	cin >> str1 ;
	cout << "---------------------------\n" ;
	
	cout << "\nEnter the second string: \n" ;
	cin >> str2 ;
	cout << "---------------------------\n" ;	
	
	
	result = strcmp(str1,str2);  // this will compare the first non-matching character.
	
	
	if (result == 0){
		cout << "\nTwo strings are same.\n" ;
	}
	else if (result < 0) {
		cout << "\nThe first non-matching character in string 2 is greater (in ASCII) than that of string 1.\n" ;
	}
	else if (result > 0) {
		cout << "\nThe first non-matching character in string 1 is greater (in ASCII) than that of string 2.\n" ;
	}
		
 
}
