#include <iostream>

using namespace std;

void f( const int a = 5){
		
	cout << a*2 << endl;
		
	}
	
int a = 123;
	
int main(){
		
	f(1) ; //Imprimira 2
		
	f(a) ; //Imprimira 246
		
	int b = 3;
		
	f(b) ; //Imprimira 6
		
	int a = 4;
		
	f(a) ; //Imprimira 8
		
	f(); //Imprimira 10
		
	return 0;
	
}
