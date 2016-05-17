#include <iostream>

using namespace std;

void swap(int **a, int **b){
	
	int *temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
	
}

int main(){
	
	int x = 5, y = 6;
	int *ptr1 = &x, *ptr2 = &y;
	
	cout << *ptr1 << ", " << *ptr2 << endl;
	
	swap(&ptr1, &ptr2);
	
	cout << *ptr1 << ", " << *ptr2 << endl;
	
	return 0;
	
}
