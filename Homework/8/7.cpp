//complete
#include<iostream>

using namespace std ;

int main () {
	int Num,Sum = 1;
	int *Pointer;
	
	
	cout << "Enter the number \n" ;
	cin >> Num;
	
	Pointer = &Num ;
	
 
	for (int i =1 ; i <= *Pointer ; i++ ){
		
		Sum = i * Sum ;
		
	}
	
	cout << "The sum of the factorial "<<*Pointer << " is " << Sum ;

	
	
	
	
	
	
	
	
	
	
}
