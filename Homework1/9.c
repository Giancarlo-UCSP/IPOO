#include <stdio.h>

main(){
	int numeros[4];
	int i;
	int divisor=2;
	int max=1;
	
	for(i=0;i<4;i++){
		printf("Número: ");
		scanf("%d",&numeros[i]);
	}
	
	for(divisor;divisor<=numeros[0] && divisor<=numeros[1] && divisor<=numeros[2] && divisor<=numeros[3];divisor++){
		while(numeros[0]%divisor==0 && numeros[1]%divisor==0 && numeros[2]%divisor==0 && numeros[3]%divisor==0){
			max=max*divisor;
			for(i=0;i<4;i++)
				numeros[i]=numeros[i]/divisor;
		}
	}
	
	printf("El M.C.D. es: %d.",max);	
}
