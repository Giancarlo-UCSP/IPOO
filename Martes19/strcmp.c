#include <stdio.h>

int mystr(char *cad1, char *cad2){
	for(; *cad1==*cad2 ; cad1++ , cad2++)
		if(*cad1=='\0')
			return 0;
	/*return *cad1-*cad2;*/
	if ((*cad1-*cad2)<0)
		return -1;
	if ((*cad1-*cad2)>0)
		return 1;
}

int main(){
	int x;
	char *cadena1="Hi";
	char *cadena2="Hello";
	x=mystr(cadena1,cadena2);
	printf("%d\n",x);
}
