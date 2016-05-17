#include <iostream>
#define SIZE 100

using namespace std;

int sum(int arr[], int tamanio, int total = 0){
	
	for(int i = 0; i < tamanio; i++)
		total += arr[i];
	
	return total;
	
}

int main(){
	
	int nums[SIZE], _size;
	cin >> _size;
	
	if(_size > 0){
		
		for(int i = 0; i < _size; ++i){
			
			cin >> nums[i];
			
		}
		
		cout << sum(nums, _size) << endl;
		
	}
	
	else
		
		cout << "Ingresar tamano valido" << endl;
	
	return 0;
}
