#include <stdio.h>
#include <string.h>

char copiar(char *s, char *t){
	int i,j;
	i=j=0;
	
	while(s[i]) i++;
	
	while(t[j])
	{
		s[i-1]=t[j];
		i++;
		j++;
	}
	
	return *s;
}

void mystrend(char *s,char *t){
	if (s[strlen(s)-1]==t[0]){
		copiar(s,t);
		printf("(%d) %s",1,s);
	}
		
	else
		printf("%d",0);
}

int main(){	
	char primera[20];
	char segunda[20];
	printf("Ingrese la primera palabra: ");
	scanf("%s",primera);
	printf("Ingresa la segunda palabra: ");
	scanf("%s",segunda);
	mystrend(primera,segunda);
}
