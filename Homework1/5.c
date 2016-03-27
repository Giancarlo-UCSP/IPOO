#include <stdio.h>

main(){
	int numero,divisor;
	int i=2;
	int suma=0;
	printf("Ingresa un número: ");
	scanf("%d",&numero);
	
	for(i;i<numero;i++){
		for(divisor=2;i%divisor!=0;divisor++);
		if(divisor==i){
			/*printf("%d\n",i);*/
			suma=suma+i;
		}
	}	
	printf("La suma es: %d.",suma);
}
