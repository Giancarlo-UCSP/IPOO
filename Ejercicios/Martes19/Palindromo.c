#include <stdio.h>
#include <string.h>

int palindromo(char *p){
	int i,j;
	for (i=0, j=strlen(p)-1;i<j;i++,j--){
		if (p[i]==p[j])
			return 1;
		else
			return 0;
	}
}

int main(){
	int x;
	char palabra[20];
	printf("Ingresa la palabra: \n");
	scanf("%s",palabra);
	x=palindromo(palabra);
	if (x==1)
		printf("Es palindromo.\n");
	if (x==0)
		printf("No es palindromo.\n");
}
