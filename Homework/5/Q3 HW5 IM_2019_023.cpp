#include<iostream>
#include<math.h>

using namespace std;

//declaring the function
double caldist (double x1,double y1,double x2,double y2) ;

int main(){
	double x1,x2,y1,y2,final ;
	
	cout << "Enter the X1 : " ;
	cin >> x1 ;
	cout << "Enter the Y1 : " ;
	cin >> y1 ;	
	cout << "\n" ; 
	cout << "Enter the X2 : " ;
	cin >> x2 ;
	cout << "Enter the Y2 : " ;
	cin >> y2 ;	
	
	//calling the finction to calculate distance
	final = caldist (x1,y1,x2,y2);
	
	cout << "----------------------------------------------- \n" ;
	cout << "The distance between two points is : " << final << endl ; 
	
	return 0;	
}

//function to calculate distance
double caldist (double x1,double y1,double x2,double y2){
	double x_temp,y_temp,out ;
	
	x_temp = x1 - x2 ;
	x_temp = pow (x_temp , 2) ; // pow function is used to get the power 
	
	y_temp = y1 - y2 ;
	y_temp = pow (y_temp , 2) ;	
	
	out = sqrt((x_temp + y_temp)); //sqrt function is used to get the square root
	return out;	
}
