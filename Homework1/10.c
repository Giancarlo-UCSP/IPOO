#include <stdio.h>

main(){
	float numero;
	int k;
	float Harm=0;
	printf("Ingrese un número: ");
	scanf("%f",&numero);
	
	for(k=1;k<=numero;k++)
		Harm=Harm+(1.000/k);
	
	printf("El número Harmónico es: %6.4f.",Harm);
}
