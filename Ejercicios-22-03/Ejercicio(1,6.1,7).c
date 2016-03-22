#include <stdio.h>
/* El ejercicio 1.6 pide verificar si EOF es 1 o 0.
El 1.7 pide escribir el programa que imprima el valor de EOF.
Con este programa se pueden explicar los dos ejercicios. */

main(){
	printf ("Ingresa una tecla: ");
	getchar();
	printf ("El valor de EOF es: %d", getchar() != EOF);
}
