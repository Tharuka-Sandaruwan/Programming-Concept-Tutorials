
//complete
#include <iostream>


using namespace std;

int main() {
	int vowel = 0 ,all =0 ;
	
	char String[100];
	char *Pointer ;
	
	
	cout << "Enter the string below \n" ;
    fgets(String, sizeof String, stdin);
     
	Pointer = String ;
	

	while (*Pointer != '\n' ){
		if(*Pointer == 'a' || *Pointer == 'e' || *Pointer == 'i' || *Pointer == 'o' || *Pointer == 'u' || *Pointer == 'A' || *Pointer == 'E' || *Pointer == 'I' || *Pointer == 'O' || *Pointer == 'U'  ){
		vowel ++ ;
		}
		
		all++ ;	
		Pointer++ ;
	}
	cout << "\n--------------------------------------------------" ;
	cout << "\nThe string is " << all << " Characters in length.";
	cout << "\nThere are " << vowel << " Vowels in this string.";
	cout << "\nThere are " << all - vowel  << " Consonents in this string.";		
}
