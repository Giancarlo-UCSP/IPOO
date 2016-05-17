#include <iostream>
using namespace std;

int main(){
	
	int size ;
	
	cin >> size ;
	
	int *nums = new int[size];
	
	for(int i = 0; i < size; ++i){
		
		cin >> nums[i];
		
	}
	
	for (int i = 0; i < size; ++i){
		
		delete &nums[i];
		
	}
	
	delete nums;
	
	return 0;
}
