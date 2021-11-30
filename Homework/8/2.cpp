//complete
#include<iostream>

using namespace std;

int main(){
	int input;
	int *pointer ;   // declared the pointer variable
	
	cout << "Enter an integer value for input variable.\n" ;
	cin >> input ;
	pointer = &input ;   // assigning the memory location to the pointer
	cout << "The entered value was linked to a pointer variable.\n" ;
	cout << "\nThe address of the pointer variable is " << &pointer << endl;
		
	
}
