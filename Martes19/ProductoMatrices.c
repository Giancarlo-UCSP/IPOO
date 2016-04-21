#include <stdio.h>

int main()
{
	int MatrizA[40][40], MatrizB[40][40], MatrizC[40][40];
	int fil_a;
	int col_a;
	int col_b;
	int i,j,z;
	
	printf("Matriz A\n");
	printf("Filas de Matriz A: ");
	scanf("%d",&fil_a);
	printf("Columnas de Matriz A: ");
	scanf("%d",&col_a);
	
	for(i=0; i<fil_a; ++i)
	{
		for(j=0; j<col_a; ++j)
		{
		printf("Ingrese valor para Matriz A (%d,%d): ",i,j);
		scanf("%d",&MatrizA[i][j]);
		}
	}
	printf("\n");
	printf("Matriz B\n");
	printf("Filas de Matriz B: %d\n",col_a);
	printf("Columnas de Matriz B: ");
	scanf("%d",&col_b);
	
	for(i=0; i<col_a; ++i)
	{
		for(j=0; j<col_b; ++j)
		{
		printf("Ingrese valor para Matriz B (%d,%d): ",i,j);
		scanf("%d",&MatrizB[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0; i<fil_a; ++i)
	{
		for(j=0; j<col_b; ++j)
		{
			MatrizC[i][j] = 0;
		}
	}
	
	for(i=0; i<fil_a; ++i)
	{
		for(j=0; j<col_b; ++j)
		{
			for(z=0; z<col_a; ++z)
			{
				MatrizC[i][j] += MatrizA[i][z] * MatrizB[z][j];
			}
		}
	}
	
	
	printf("Matriz A:\n");
	for(i=0; i<fil_a; ++i)
	{
		for(j=0; j<col_a; ++j)
		{
			printf("%d ",MatrizA[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("Matriz B:\n");
	for(i=0; i<col_a; ++i)
	{
		for(j=0; j<col_b; ++j)
		{
			printf("%d ",MatrizB[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("Producto de Matrices:\n");
	for(i=0; i<fil_a; ++i)
	{
		for(j=0; j<col_b; ++j)
		{
			printf("%d ",MatrizC[i][j]);
		}
		printf("\n");
	}
	return 0;
}
