#include <stdio.h>

main(){
	int c,espacios,tabs,lineas;
	while ((c=getchar())!=EOF){
		if (c==' ')
			espacios=espacios+1;
		if (c=='\t')
			tabs=tabs+1;
		if (c=='\n')
			lineas=lineas+1;
	}
	printf ("Espacios: %d. Tabs: %d. Líneas: %d.\n",espacios,tabs,lineas);
}
