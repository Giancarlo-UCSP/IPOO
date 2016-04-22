#include <stdio.h>
#include <string.h>

char mystrcat(char *inicio, char *fin){
	int i,j;
	i=j=0;
	
	while(inicio[i]) i++;
	
	while(fin[j])
	{
		inicio[i]=fin[j];
		i++;
		j++;
	}

	inicio[i]='\0';
	
	return *inicio;
}


int main(){
	char a[10]="Hello ";
	char b[10]="world!\n";
	mystrcat(a,b);
	printf("%s",a);
}
