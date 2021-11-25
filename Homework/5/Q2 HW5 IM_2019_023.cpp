#include<iostream>
using namespace std;

// declaring the function
int tseccon (int hour,int minu,int sec) ;

int main (){
	
	int hour1,hour2,minu1,minu2,sec1,sec2,tsec1,tsec2,timediff,timediffunsign;

	cout << "___________________________________________ \n";
	cout << "\n";
	cout << "---------------  Time 1  ------------------ \n";
	cout << "___________________________________________ \n";		
	cout << "\n";

	gethour1:		
	cout << "Enter the hour (0 - 12) :" ;
	cin >> hour1 ;
	if (hour1 < 0){
		cout << "Hour must be a positive value! \n" ;
		goto gethour1 ;
	}	
	if (hour1 > 12){
		cout << "Hour must be less than or equal to 12! \n" ;
		goto gethour1 ;
	}	
	
	getminu1:		
	cout << "Enter the minute (0 - 59) : " ;
	cin >> minu1 ;
	if (minu1 < 0){
		cout << "Minute must be a positive value! \n" ;
		goto getminu1 ;
	}	
	if (minu1 > 59){
		cout << "Minute must be less than or equal to 59! \n" ;
		goto getminu1 ;
	}
	
	getsec1:		
	cout << "Enter the second (0 - 59) : " ;
	cin >> sec1 ;
	if (sec1 < 0){
		cout << "Second must be a positive value! \n" ;
		goto getsec1 ;
	}	
	if (sec1 > 59){
		cout << "Second must be less than or equal to 59! \n" ;
		goto getsec1 ;
	}	
	
	
	cout << "___________________________________________ \n";
	cout << "\n";
	cout << "---------------  Time 2  ------------------ \n";
	cout << "___________________________________________ \n";	
	cout << "\n";
		
	gethour2:		
	cout << "Enter the hour (0 - 12) : " ;
	cin >> hour2 ;
	if (hour2 < 0){
		cout << "Hour must be a positive value! \n" ;
		goto gethour2 ;
	}	
	if (hour2 > 12){
		cout << "Hour must be less than or equal to 12! \n" ;
		goto gethour2 ;
	}	
	
	getminu2:		
	cout << "Enter the minute (0 - 59) : " ;
	cin >> minu2 ;
	if (minu2 < 0){
		cout << "Minute must be a positive value! \n" ;
		goto getminu2 ;
	}	
	if (minu2 > 59){
		cout << "Minute must be less than or equal to 59! \n" ;
		goto getminu2 ;
	}
	
	getsec2:		
	cout << "Enter the second (0 - 59) : " ;
	cin >> sec2 ;
	if (sec2 < 0){
		cout << "Second must be a positive value! \n" ;
		goto getsec2 ;
	}	
	if (sec2 > 59){
		cout << "Second must be less than or equal to 59! \n" ;
		goto getsec2 ;
	}
	
	//calling function and calculating the difference
	tsec1 = tseccon (hour1,minu1,sec1) ;
	tsec2 = tseccon (hour2,minu2,sec2) ;
	timediff = tsec1 - tsec2;
	
	// removing the - sign
	if (timediff < 0){
		timediffunsign = -1 * timediff ;
	}
	else{
		timediffunsign = timediff;
	}

	cout << "___________________________________________ \n";
	cout << "\n";
	cout << "The time difference is : " << timediffunsign <<" Seconds. " << endl ;
	cout << "___________________________________________ \n";	
	cout << "\n";	
	
}


// function to convert the time to seconds

int tseccon (int hour,int minu,int sec){
	int hoursec,minusec,tsec ;
	hoursec=hour*3600;	
	minusec=minu*60;
	tsec=hoursec+minusec+sec;
	return tsec;
}




