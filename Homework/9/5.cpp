//completed
#include<iostream>

using namespace std;

int main(){
	
	struct timer{
		int hrs;  //in here the timer structure is defined
		int mins;
	};
	
	timer *ptr = new timer;  //we have used timer srtucture as the type to the pointer
	
	//in the pointer there are elements according to the timer structure.
	(*ptr).hrs = 10;
	
	(*ptr).mins = 20;
	
	
	cout << "Hour is : " <<(*ptr).hrs << "  Minute is : " << (*ptr).mins ;	
/*The delete operator does not actually delete anything.
 It simply returns the memory being pointed to back to the operating system.
 The operating system is then free to reassign that memory to another application (or to this application again later).*/	
	delete ptr;
	
}
