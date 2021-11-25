#include<iostream>
using namespace std;

// function declaration
int integerpower (int funbase , int funexpo) ;

int main (){
	
int base,expo,out ;

cout << "Enter the Base : " ;
cin >> base ;

getexpo:
cout << "Enter the exponent : " ;
cin >> expo ;
	if (expo == 0){
		cout << "Exponent must not be zero! \n";
		goto getexpo; // get back to the getting the exponent step
	}
			
	if (expo < 0){
		cout << "Exponent must be a positive value! \n" ;
		goto getexpo;
	}
	
	out = integerpower (base ,expo) ;
	
	cout << "--------------------------------- \n" ;
	cout << "The value is : "<< out << endl ;
	cout << "--------------------------------- \n" ;
	
	return 0;
	
}

// this function generates the value
int integerpower (int funbase , int funexpo){
	int funout = 1;
	for (int i=0; i < funexpo; i++){
		funout = funout*funbase;
	}
	return funout ;
}
	
