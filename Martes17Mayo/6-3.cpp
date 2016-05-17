
#include <iostream>

#define WIDTH 2
#define LENGTH 2

using namespace std;

void transpose(int input[][LENGTH], int output[][WIDTH]){
	
	for(int i=0; i < LENGTH; i++){
		
		for(int j = 0; j < WIDTH; j++){
			
			output[i][j] = input[j][i];
			
		}
		
	}
	
}

void printMatriz(int arr[LENGTH][WIDTH]){
	
	for(int i=0; i<LENGTH; ++i){
		
		for(int j=0; j<WIDTH; ++j){
			
			cout << arr[i][j] << " ";
			
		}
		cout << endl;
	}
	
}

int main(){
	
	int A[WIDTH][LENGTH] =  {{16, 15},{3, 1}};
	
	int B[LENGTH][WIDTH];
	
	cout << "Matriz A" << endl;
	
	printMatriz(A);
	
	transpose(A, B);
	
	cout << "\nTranspuesta de la Matriz A" << endl;
	
	printMatriz(B);
	
	return 0;
	
}
