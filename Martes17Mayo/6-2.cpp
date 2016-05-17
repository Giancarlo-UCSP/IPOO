#include <iostream>
#include <stdlib.h>
#define SIZE 100

using namespace std;

void printArray(int arr[], int tamanio){
	
	for(int i = 0; i < tamanio - 1; i++)
		cout << arr[i] << ", " ;
	
	cout << arr[tamanio - 1] << endl;;
	
}

void reverse(int arr[], int tamanio){
	
	int temp;
	
	for (int i = 0; i < tamanio/2; i++){
		
		temp = arr[i];
		arr[i] = arr[tamanio - 1];
		arr[tamanio - 1] = temp;
		tamanio--;
		
	}
	
}

int main(){
	
	int nums[SIZE], _size;
	cin >> _size;
	
	if(_size > 0){
		
		for(int i = 0; i < _size; ++i)
			
			cin >> nums[i];
		
		reverse(nums, _size);
		printArray(nums, _size);
		
	}
	
	else{
		
		cout << "Ingresar tamanio valido" << endl;
		
	}	
	
	return 0;
}
