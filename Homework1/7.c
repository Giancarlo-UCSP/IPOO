#include <stdio.h>

main(){
	int numero,i;
	int factorial=1;
	printf("Ingrese un número: ");
	scanf("%d",&numero);
	
	for(i=1;i<=numero;i++)
		factorial=factorial*i;
	
	printf("El factorial de %d es: %d.",numero,factorial);
}
