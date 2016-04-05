#include <stdio.h>

int llave,parentesis,corchete;

void comentario();
void inquote(int c);
void buscar(int c);

int main(){
	int c;
	
	extern int llave,parentesis,corchete;
	
	while((c=getchar())!=EOF)
		if( c == '/')
			if((c=getchar())== '*')
				comentario();
			else 
				buscar(c);
		else if( c == '\'' || c == '"')
			inquote(c);
		else
			buscar(c);
		
		if( llave < 0)
		{
			printf("Llaves incompletas.\n");
			llave = 0;
		}   
		else if( parentesis < 0)
		{
			printf("Parentesis incompletos.\n");
			parentesis = 0;
		}
		else if( corchete < 0)
		{
			printf("Corchetes incompletos.\n");
			corchete = 0;
		}
		
		if( llave > 0)
			printf("Llaves incompletas.\n");
		else if(parentesis > 0)
			printf("Parentesis incompletos.\n");
		else if(corchete > 0)
			printf("Corchetes incompletos.\n"); 
		
		return 0;
}

void comentario()
{
	int c,d;
	
	c = getchar();
	d = getchar();
	
	while(c != '*' || d != '/')
	{
		c = d;
		d = getchar();
	}
}

void inquote(int c)
{
	int d;
	
	putchar(c);
	
	while((d=getchar())!=c)
		if( d == '\\')
			getchar();
}

void buscar(int c)
{
	extern int llave,parentesis,corchete;
	
	if ( c == '{')
		--llave;
	else if ( c == '}')
		++llave;
	else if( c == '(')
		--parentesis;
	else if( c == ')')
		++parentesis;
	else if( c == '[')
		--corchete;
	else if( c == ']')
		++corchete;
}
