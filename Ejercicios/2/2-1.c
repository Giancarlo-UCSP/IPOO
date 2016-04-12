#include <stdio.h>

int main()
{
	printf("Mínimo valor de Char: %d\n",-(char)((unsigned char) ~0 >> 1) - 1);
	printf("Máximo valor de Char: %d\n",(char) ((unsigned char) ~0 >> 1));
	
	printf("Mínimo valor de Short: %d\n",-(short)((unsigned short)~0 >>1) -1);
	printf("Máximo valor de Short: %d\n",(short)((unsigned short)~0 >> 1));
	
	printf("Mínimo valor de Int: %d\n",-(int)((unsigned int)~0 >> 1) -1);
	printf("Máximo valor de Int: %d\n",(int)((unsigned int)~0 >> 1));
	
	printf("Mínimo valor de Long: %ld\n",-(long)((unsigned long)~0 >>1) -1);
	printf("Máximo valor de Long: %ld\n",(long)((unsigned long)~0 >> 1));
	
	printf("Máximo valor de Unsigned Char: %d\n",(unsigned char)~0);
	printf("Máximo valor de Unsigned Short: %d\n",(unsigned short)~0);
	printf("Máximo valor de Unsigned Int: %u\n",(unsigned int)~0);
	printf("Máximo valor de Unsigned Long: %lu\n",(unsigned long)~0);
	
	return 0;
}
