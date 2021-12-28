//completed
#include<iostream>

using namespace std;


int main(){
	float *nums ,temp;
	nums = new float[5]  ;
	
	//numbers are pre-input
	nums[0]=5;
	nums[1]=7;	
	nums[2]=2;
	nums[3]=9;	
	nums[4]=8;	
	
	for(int i=0; i<5 ;i++){
		
		for(int j=i+1; j<5; j++){
			if(nums[j]<nums[i]){
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
			
			
		}
		
	}
	
	cout << "The largest element is : " <<nums[4] ;
	
}
