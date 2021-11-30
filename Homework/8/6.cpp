//complete

#include<iostream>

using namespace std;

int main(){
	int Num1,Num2,Num3,large;
	int *P1,*P2,*P3 ;
	
	cout << "Enter Number 1 : \n" ;
	cin >> Num1 ;
	P1 = &Num1;
	
	cout << "Enter Number 2 : \n" ;
	cin >> Num2 ;
	P2 = &Num2;
	
	cout << "Enter Number 3 : \n" ;
	cin >> Num3 ;
	P3 = &Num3;
	
	cout << "--------------------------\n" ;
	
	if (*P1 >= *P2 && *P1 >= *P3 ){
		cout << "The largest number is " << *P1 << endl ;
	}
	else if (*P2 >= *P1 && *P2 >= *P3 ){
		cout << "The largest number is " << *P2 << endl ;
	}	
	else {
		cout << "The largest number is " << *P3 << endl ;
	}		


	if (*P1 <= *P2 && *P1 <= *P3 ){
		cout << "The smallest number is " << *P1 << endl ;
	}
	else if (*P2 <= *P1 && *P2 <= *P3 ){
		cout << "The smallest number is " << *P2 << endl ;
	}	
	else {
		cout << "The smallest number is " << *P3 << endl ;
	}		

		
	
}
