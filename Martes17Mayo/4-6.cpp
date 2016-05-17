#include <iostream>
#define SIZE 100

using namespace std;

int sum(int *arr, int tamanio, int cont = 0){
	
	if(cont < tamanio){
		
		++cont;
		return *arr + sum(arr + 1, tamanio, cont);
		
	}
	
	return 0;
	
}

int main(){
	
	int nums[SIZE], _size;
	cin >> _size;
	
	if(_size > 0){
		
		for(int i = 0; i < _size; ++i)
			
			cin >> nums[i];
		
		int sumatotal = sum(nums, _size);
		cout << sumatotal << endl;
			
	}
	
	else
		
		cout << "Ingresar tamanio valido" << endl;
	
	return 0;
}
