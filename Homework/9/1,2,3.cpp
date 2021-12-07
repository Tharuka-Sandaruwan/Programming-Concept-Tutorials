//completed
//Q1,Q2,Q3 allarae in here
#include<iostream>



using namespace std;

int main(){
	//Q1
	
	double *d_var;
	d_var = new double;
	
	double *d_array;
	d_array = new double[10] ;
	
	//Q2
	cout << "Enter a value for d_var variable: " ;
	cin >> *d_var ;
	cout << "The value entered in d_var was " << *d_var << endl;
	

	//Q3
	
	for(int i = 0 ;i < 10 ; i++){
		
		d_array[i] = 1.0 ;
	}
	
	
	delete d_var ;
	
	delete [] d_array;
	



}
