# include <iostream>

int main() {
	
	using namespace std;
	
	int N , count ;
	double temp1 , temp2 ;
	
	getcount:
	cout << "How many numbers do you need average?  ";
	cin  >>  N ;
	//checks whether the count is a valid one
	if(N <0 ){
		cout<< "Please enter a valid count!" << endl ;
			goto getcount ;
	}	
	
	cout << "----------------------------------------" << endl;
	
	temp1 = 0;
	count = 1;
	
	while (count < N+1 ){
		cout << "Enter the Number " << count << " : " << endl ;
		cin >> temp2 ;
		temp1 = temp1 + temp2 ;
		count ++ ;
	}
	
	cout << "----------------------------------------" << endl;
	cout << "The sum of " << N << " numbers is : " << temp1 << endl;
	cout << "The average is : " << temp1/N << endl ;
	
}
