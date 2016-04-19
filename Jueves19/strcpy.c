#include <stdio.h>
#include <string.h>

void mystrcpy(char *copia, char *original){
	while (*copia++=*original++)
	;
}

int main(){
	char cadena2[10];
	char *cadena1="Hello";
	mystrcpy(cadena2,cadena1);
	printf("%s\n",cadena2);
}
