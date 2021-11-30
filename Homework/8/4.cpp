//complete

#include<iostream>

using namespace std;

int main(){
	int input;
	int *pointer ;
	
	cout << "Enter an integer value for input variable.\n" ;
	cin >> input ;
	pointer = &input ;
	cout << "The entered value was linked to a pointer variable.\n" ;
	cout << "\nThe value inside the pointer variable is " << *pointer << endl;
		
	
}
