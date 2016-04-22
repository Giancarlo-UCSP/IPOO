#include <stdio.h>
#include <string.h>

void palindromo(char *p){
	int i,j,c;
	for (i=strlen(p)-1, j=0 ; i>=0 ; i-- ,j++){
		if (p[i]==p[j])
			c++;
	}
	if (c==strlen(p))
		printf("Es palindromo.\n");
	else
		printf("No es palindromo.\n");
}

int main(){
	int x;
	char palabra[20];
	printf("Ingresa la palabra: \n");
	scanf("%s",palabra);
	palindromo(palabra);	
}
