#include <stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower=0;
	upper=300;
	step=20;
	
	fahr=lower;
	printf("Celsius \t Fahrenheit\n"); 
	while (celsius<=upper){
		fahr=((9.0*celsius)+160)/5;
		printf("%3.0f \t\t %6.0f \n", celsius, fahr);
		celsius=celsius+step;
	}
}
