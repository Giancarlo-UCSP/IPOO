#include <iostream>
#include <stdlib.h>
#define SIZE 100

using namespace std;

void printArray(int arr[], int tamanio){
	
	for(int i = 0; i < tamanio - 1; i++)
		cout << arr[i] << ", " ;
	
	cout << arr[tamanio - 1] << endl;;
		
}

int main(){
	
	int nums[SIZE], _size;
	cin >> _size;
	
	if(_size > 0){
		
		for(int i = 0; i < _size; ++i)
			
			cin >> nums[i];
		
		printArray(nums, _size);
		
	}
		
	else{
	
		cout << "Ingresar tamanio valido" << endl;
	
	}	
		
	return 0;
}
