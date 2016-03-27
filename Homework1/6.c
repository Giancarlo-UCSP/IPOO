#include <stdio.h>

main(){
	int x,n,i;
	int potencia=1;
	printf("Ingresa la base: ");
	scanf("%d",&x);
	printf("Ingresa el exponente: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		potencia=potencia*x;
	
	printf("%d^%d = %d",x,n,potencia); 
}
