#include <iostream>

using namespace std;

void swap(int &x, int &y){
	
	int temp;
	
	temp = x;
	x = y;
	y = temp;
	
}

int main(){
	
	int a = 1;
	int b = 2;
	
	cout << a << ", " << b << endl;
	
	swap(a, b);
	
	cout << a << ", " << b << endl;
	
	return 0;
	
}
