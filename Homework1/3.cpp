#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
	int c;
	printf("\tNUMERO\tCUADRADO\n");
	for (int i=0; i<10;i++){
		cin>>c;
		system("cls");
		printf("\tNUMERO\tCUADRADO\n");
		cout<<"\t"<<c<<"\t"<<c*c<<endl;
	}
}
