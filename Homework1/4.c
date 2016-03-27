#include <stdio.h>

main(){
	int n;
	printf("Ingrese un número: ");
	scanf("%d",&n);
	printf("La suma de los %d primeros números enteros positivos es: %d",n,(n*(n+1))/2);
}
