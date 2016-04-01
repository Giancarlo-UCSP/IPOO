#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

float conversor(float f){
	float c;
	c=(5.0/9.0)*(f-32.0);
	return c;
}

void imprimir(float f, float c){
	printf("%3.0f \t\t %6.1f \n", f, c);
}

main()
{
	float fahr, celsius;
	
	fahr=LOWER;
	printf("Fahrenheit \t Celsius\n"); 
	while (fahr<=UPPER){
		celsius=conversor(fahr);
		imprimir(fahr,celsius);
		fahr=fahr+STEP;
	}
}
