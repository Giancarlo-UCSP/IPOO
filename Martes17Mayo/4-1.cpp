#include <iostream>

using namespace std;

int sumInteger(int n1, int n2){
	
	return n1 + n2;
	
}

double sumDouble(double n1, double n2){
	
	return n1 + n2;
	
}

int main(){
	
	int x = sumInteger(1, 2);
	cout << x << endl;
	
	double y = sumDouble(1.2, 3.4);
	cout << y << endl;
	
	return 0;
	
}
