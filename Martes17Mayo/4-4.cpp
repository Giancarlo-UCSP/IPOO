#include <iostream>

using namespace std;

int sum(int n1, int n2, int n3 = 0, int n4 = 0){
	
	return n1 + n2 + n3 + n4;
	
}

int main(){
	
	int x = sum(3, 5, 7);
	cout << x << endl;
	
	return 0;
	
}
