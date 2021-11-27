//completed

#include <sstream>  
#include <iostream>  
#include <iomanip> 

using namespace std;


void displaylist();   //function used to display the cities.
int  city_y();       //function used to select the cities along the y axis.
int  city_x();      //function used to select the cities along the x axis.  


bool firstTime = false;

int distant[3][3] ={0,40,74,40,0,36,74,36,0} ;
int x,y,z,a,totalDistance = 0;


int main(){

	cout << "What is your current city? \n" ;
	displaylist();
	city_y();
	
	cout << "What is the next city you want to go? \n" ;
	displaylist();
	city_x();
	
	firstTime = true;
		
	cout << "\n------------------------------------------------\n" ;
	cout << "\nThe distant between is " << distant[y][x] << endl ;
	totalDistance += distant[y][x] ;	
	cout << "\nThe total distant travelled is " << totalDistance << endl ;	
	cout << "\n------------------------------------------------\n" ;
	y = x;  // this will make the currently selected city as the previous city when requesting a new city.


	bool anyMore = true;   //used to terminate the following loop
	
	while(anyMore){
	cout << "What is the next city you want to go? \n" ;
	cout << "\nIf there are no more cities,Enter 0.otherwise press any number. \n" ;
	cin >> a;
	if(a==0){
		anyMore = false;
		break;		
	}	
		
	displaylist();
	city_x();	
		
	cout << "\n------------------------------------------------\n" ;
	cout << "\nThe distant between selected cities is " << distant[y][x] ;
	totalDistance += distant[y][x] ;	
	cout << "\nThe total distant travelled is " << totalDistance << endl ;	
	cout << "\n------------------------------------------------\n" ;
		
	y = x;
	
	}
	
	cout << "\n\n     Good bye!" ;
}

void displaylist(){

	cout << "              Balangoda " << " Ratnapura " << " Eheliyagoda " << endl;
	cout << " Balangoda  " ;
	for (int a=0; a < 3;a++){
		cout << setw (10) << distant[a][0]  ;
	}
	cout << endl ;
	
	cout << " Ratnapura  " ;
	for (int a=0; a < 3;a++){
		cout << setw (10) << distant[a][1]  ;
	}
	cout << endl ;
	
	cout << " Eheliyagoda" ;
	for (int a=0; a < 3;a++){
		cout << setw (10) << distant[a][2]  ;
	}
	cout << endl ;


}

int  city_y(){
	get_y:
	cout << "\nPress the related number to select that city.\n" ;
	cout << "1 : Balangoda\n";
	cout << "2 : Ratnapura\n";
	cout << "3 : Eheliyagoda\n";
	cout << "-------------------------------------------------\n" ;
	
	cin >> z ;		
	
	
	
	if (z == 1){
		y = 0 ;
		
	}
	
	else if (z == 2){
		y = 1 ;

	}	
	else if (z == 3){
		y = 2;

	}
			
	else if (z == 0 && firstTime){
		return 0;
	}
	else {
		cout << "\n Invalid input!\n" ;
		goto get_y;
	}
	


}

int  city_x(){
	get_x:
	cout << "\nPress the related number to select that city.\n" ;
	cout << "1 : Balangoda\n";
	cout << "2 : Ratnapura\n";
	cout << "3 : Eheliyagoda\n";
	cout << "-------------------------------------------------\n" ;
	
	cin >> z ;		
	
	
	
	if (z == 1){
		x = 0 ;
		
	}
	
	else if (z == 2){
		x = 1 ;

	}	
	else if (z == 3){
		x = 2;

	}		
	else if (z == 0 && firstTime){
		return 0;
	}
	else {
		cout << "\n Invalid input!\n" ;
		goto get_x;
	}
	


	
}
