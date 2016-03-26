#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int numeros[3];
	for (int i=0;i<2;i++){
		cout<<"Introduce un número: ";
		cin>>numeros[i];
	}
	if (numeros[i]>numeros[i+1]){
		if (numeros[i]>numeros[i+2]){
			cout<<"El orden es: ",numeros[i+2]," ",numeros[i+1]," ",numeros[i]<<endl;
		}
		else{
			cout<<"El orden es: ",numeros[i+1]," ",numeros[i+2]," ",numeros[i]<<endl;
		}
	}
	else{
		if (numeros[i]>numeros[i+2]){
			cout<<"El orden es: ",numeros[i+2]," ",numeros[i]," ",numeros[i+1]<<endl;
		}
		else{
			if (numeros[i+1]<numeros[i+2]){
				cout<<"El orden es: ",numeros[i]," ",numeros[i+1]," ",numeros[i+2]<<endl;
			}
		}
	}
}
