#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
	int c;
	printf("\tNúmero\tCuadrado\n");
	for (int i=0; i<10;i++){
		cin>>c;
		system("cls");
		printf("\tNúmero\tCuadrado\n");
		cout<<"\t"<<c<<"\t"<<c*c<<endl;
	}
}
