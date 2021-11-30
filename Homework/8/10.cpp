
//complete
#include <iostream>


using namespace std;

int main() {
	int count =0 ;
	char String[100];
	char *Pointer ;
	
	cout << "Enter the string below \n" ;
    fgets(String, sizeof String, stdin);
    
    
	Pointer = String ;
	


	while (*Pointer != '\n' ){
		count ++ ;
		Pointer++ ;
	}
	
	cout << "\nThere are " << count << " Characters in this string.";
		
}
