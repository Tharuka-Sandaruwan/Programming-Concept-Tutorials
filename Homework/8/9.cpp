//completed
#include<iostream>

using namespace std;

int main(){
	int Element;
	int *Pointer;
	
	cout << "how many numbers do yo need to store in the array? " ;
	cin >> Element  ;
	cout << endl;
	
	int Array[Element] ;
	
	Pointer = Array; //linking with the pointer	
	
	for (int i=0; i <Element; i++){
		cout << "Enter the element for array slot " << i+1 << " : " ;
		cin >> *(Pointer+i) ;		
	}
	

	
	cout << "\n\nThe data stored in the array are as follows; \n" ;
	
	for (int i=0; i <Element; i++){
		cout << "The Element in the slot " << i+1 << " is: " << *(Pointer+i) << endl;
	
	}
	
	
}
