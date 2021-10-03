// Assignment Number = 1
// Due Date = 23/08/2021



# include <iostream>
# include <math.h>

int main(){	

	using namespace std;
	
// initializing the variables
	
	int balance;
	int price;
	int tendered_cash;
	int no_of_5000_notes,no_of_2000_notes,no_of_1000_notes,no_of_500_notes,no_of_100_notes,no_of_50_notes,no_of_20_notes,no_of_10_notes,no_of_5_coins,no_of_2_coins,no_of_1_coins ;

// getting the inputs from the user	
	cout << "Enter the price of the produt : ";
	cin >> price ;
	cout << "Enter the tendered cash amount : ";
	cin >> tendered_cash ;

//processing the amount of notes
	balance = tendered_cash - price ;
	
	no_of_5000_notes = balance/5000 ;
	balance = balance % 5000;
	
	no_of_2000_notes = balance/2000 ;
	balance = balance % 2000;
	
	no_of_1000_notes = balance/1000 ;
	balance = balance % 1000;
	
	no_of_500_notes = balance/500 ;
	balance = balance % 500;
	
	no_of_100_notes = balance/100 ;
	balance = balance % 100;
	
	no_of_50_notes = balance/50 ;
	balance = balance % 50;
	
	no_of_20_notes = balance/20 ;
	balance = balance % 20;
	
	no_of_10_notes = balance/10 ;
	balance = balance % 10;
	
	no_of_5_coins = balance/5 ;
	balance = balance % 5;	
	
	no_of_2_coins = balance/2 ;
	
	no_of_1_coins = balance % 2;

//giving the output
	
	cout << "Rs.5000 notes : " << no_of_5000_notes << endl;
	cout << "Rs.2000 notes : " << no_of_2000_notes << endl;
	cout << "Rs.1000 notes : " << no_of_1000_notes << endl;
	cout << "Rs.500 notes  : " << no_of_500_notes << endl; 
	cout << "Rs.100 notes  : " << no_of_100_notes << endl;	
	cout << "Rs.50 notes   : " << no_of_50_notes << endl;	
	cout << "Rs.20 notes   : " << no_of_20_notes << endl;
	cout << "Rs.10 notes   : " << no_of_10_notes << endl;
	cout << "Rs.5 coins    : " << no_of_5_coins << endl;	
	cout << "Rs.2 coins    : " << no_of_2_coins << endl;
	cout << "Rs.1 coins    : " << no_of_1_coins << endl;

}
