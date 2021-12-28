//completed
#include<iostream>
#include<cstring>  //used in tolower function

using namespace std;


int *count;

void  letterCount(string str) ;


int main()
{
	string strng;	

	cout << "Enter the string you want to count the letters below :\n";
	getline(cin, strng) ;
	
	letterCount(strng);  //function call to count the letter frequency
	
	cout << "\n-------------------------\nThe letter counts are : \n" ;
	
	
//below for loop will only display elements in the count array if they are not equals to zero.thus it will only print occurences of letters which are in the string.
	for (int i=0; i<26; i++){
		if (count[i] != 0){
			cout << char(i+97) << ": " << count[i] << endl;  //in here 97 is used to indicate the letter a.In the asccii encoding number 97 is assinged to the letter a.this line will print char values of the related ascii value.
		}
	}
	
	
	delete []count; //this will deallocate the memory.
}




//following function is used to find how frequently the letters are used
void  letterCount(string strng)
{

	count = new int[26]  {0}; //creates an array to store the letter occurences.the initial value of the 26 elements is set to zero. 
	
	int x;
	int y;
	
	for (int i=0; i<strng.length(); i++){
		
		y = tolower(strng[i]) ;  //tolower is used to convert the case to the lowercase.in here it will take the numerical value of the letter
		
		x = y-97;  //this will find what the letter related to the letter a's location.
		
		*(count+x) += 1 ; //assign ther letter counts to its related memory locations in the count array.
	}
}
