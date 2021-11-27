// completed


#include<iostream>

using namespace std ;

int seat[10]= {0,0,0,0,0,0,0,0,0,0} ;
int noseatsfirst = 0 ;
int noseatsecon = 0;

int seatcheckerfirst() ;
int seatcheckerecon() ;

int main (){
	
	int selection = 0;
	int classselection = 0;
	
	while (noseatsfirst == 0 || noseatsecon == 0){
	


	
	
	getinput:
	cout << "What is the seat type you want? Type the corresponding number. \n" ;
	cout << "1 : First class \n" ;
	cout << "2 : Economy class \n " ;
	cout << "--------------------------\n " ;
	cin >> classselection ;
	

	if (classselection == 1){
		
		if (noseatsfirst == 0){
			seatcheckerfirst() ;
		}
				
		if (noseatsfirst == 1){
			cout << "The Firstclass is full.If you like to go for economy class,press 1.if not press any other number. \n " ;
			cin >> selection ;
				if  (selection == 1){
					if (noseatsecon == 0){
						selection = 0 ;
						seatcheckerecon() ;
						
					}
					else{
						cout << "Sorry Economy class is also full.You will have to wait 3 hours for the next flight. \n" ;
					}
					
				}
				else{
					cout << "\n It's Pleasure doing business with you! See you soon! \n \n" ;
				}
		}


		
	
	}
	else if (classselection == 2){

	if (noseatsecon == 0){
			seatcheckerecon() ;
		}
				
		if (noseatsecon == 1){
			cout << "The Economy class is full.If you like to go for First class,press 1.if not press any other number. \n " ;
			cin >> selection ;
				if  (selection == 1){
					if (noseatsfirst == 0){
						selection = 0 ;
						seatcheckerfirst() ;
						
					}
					else{
						cout << "Sorry First class is also full.You will have to wait 3 hours for the next flight. \n" ;
					}
					
				}
				else{
					cout << "\n It's Pleasure doing business with you! See you soon! \n \n" ;
				}
		}
		

		
	}
	else{
			cout << "invalid input! Please enter again. \n" ;
			goto getinput ;	
	}
	
}
	cout << "\n Have a nice day! \n" ;
	
}


	int seatcheckerfirst(){
		
		
		for ( int i = 0 ; i < 5 ; i++  ){
			if (seat[i] != 1 ){
				seat[i] = 1;
				cout << "You have booked seat number "<<i+1 << " in the first classs successfully! \n" ;
				noseatsfirst = 0;
				break ;
			}
			else{
				noseatsfirst = 1;
			}
			
		} 
		

	}
	
	
	int seatcheckerecon(){
		
		
		for ( int i = 5 ; i < 10 ; i++  ){
			if (seat[i] != 1 ){
				seat[i] = 1;
				cout << "You have booked seat number "<<i+1 << " in the economy class successfully! \n" ; 
				noseatsecon = 0;
				break ;
			}
			else{
				noseatsecon = 1;
			}
			
		} 
		

	}
