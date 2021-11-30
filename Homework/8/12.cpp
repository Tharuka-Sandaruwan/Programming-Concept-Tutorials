// complete

#include<iostream>

using namespace std;

int array[10] = {24,56,111,0,1,18,55,6612,5,-1} ;

int main(){
	
	int *pointer ;
	int temp;
	
	pointer = array;
	
	for(int i =0; i < 10; i++){
		for (int j=i+1 ;j < 10 ; j++){
			
			if (*(pointer+i) > *(pointer+j)){
				temp = *(pointer+i) ;
				*(pointer+i) = *(pointer+j);
				*(pointer+j) = temp ;
			}	
			
		}
	
	}
	
	
	for(int t=0; t< 10 ; t++){
		cout << *(pointer+t) << endl;
	}
	
	
	
	
	
	
	
}
