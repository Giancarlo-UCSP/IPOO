#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	cout<<"Introduce el primer número: ";
	cin>>a;
	cout<<"Introduce el segundo número: ";
	cin>>b;
	cout<<"Introduce el tercer número: ";
	cin>>c;
	
	if (a>b){
		if (b>c){
			cout<<"El orden es: "<<c<<", "<<b<<", "<<a<<endl;
		}
		else{
			if (a>c){
				cout<<"El orden es: "<<b<<", "<<c<<", "<<a<<endl;
			}
			else{
				cout<<"El orden es: "<<b<<", "<<a<<", "<<c<<endl;
			}
		}
	}
	else{
		if (a>c){
			cout<<"El orden es: "<<c<<", "<<a<<", "<<b<<endl;
		}
		else{
			if (b>c){
				cout<<"El orden es: "<<a<<", "<<c<<", "<<b<<endl;
			}
			else{
				cout<<"El orden es: "<<a<<", "<<b<<", "<<c<<endl;
			}
		}
	}
}
