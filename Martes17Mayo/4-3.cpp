#include <iostream>

using namespace std;

int sum(int n1, int n2, int n3 = 0, int n4 = 0){
	
	return n1 + n2 + n3 + n4;
	
}

int main(){
	
	int x = sum(1, 2);
	cout << x << endl;
	
	int y = sum(1, 2, 3);
	cout << y << endl;
	
	int z = sum(1, 2, 3, 4);
	cout << z << endl;
	
	return 0;
	
}
