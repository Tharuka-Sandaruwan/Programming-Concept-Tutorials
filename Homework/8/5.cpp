//complete

#include<iostream>

using namespace std;
void pointerOut(int z);


int main(){
	int input;
	
	cout << "Enter an integer value for input variable.\n" ;
	cin >> input ;
	pointerOut(input);
		
	
}
void pointerOut(int z){
	int *Pointer;
	Pointer = &z ;
	cout << "\nThe value entered is " << *Pointer << endl;
	
}
