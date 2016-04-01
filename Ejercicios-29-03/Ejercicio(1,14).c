#include <stdio.h>

main(){
	int c, nl, nw, nt,espacios,i;
	nl=nw=nt=espacios=0;
	while ((c=getchar())!=EOF){
		if (c=='\n')
			nl=nl+1;
		if (c=='\t')
			nt=nt+1;
		if (c==' ')
			espacios=espacios+1;
		if (c==' ' || c=='\t' || c=='\n')
			nw=nw+1;
	}
	printf("Líneas:\n");
	for (i=0;i<nl;i++)
		printf("*");
		printf("\n");
		
	printf("Tabs:\n");
	for (i=0;i<nt;i++)
		printf("*");
		printf("\n");
		
	printf("Espacios:\n");
	for (i=0;i<espacios;i++)
		printf("*");
		printf("\n");
		
	printf("Palabras:\n");
	for (i=0;i<nw;i++)
		printf("*");
		printf("\n");
}
