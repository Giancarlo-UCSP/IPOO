#include <stdio.h>

void idcomentario(int c);
void ecomentario();
void quote(int c);

int main(){
	int c,d;
	
	while((c=getchar())!=EOF)
		idcomentario(c);
	
	return 0;
}

void idcomentario(int c)
{
	int d;
	if( c == '/')
	{
		if((d=getchar())=='*')
			ecomentario();
		else if( d == '/')
		{
			putchar(c);
			idcomentario(d);
		}
		else 
		{
			putchar(c);
			putchar(d);
		}
	}
	else if( c == '\''|| c == '"')
		quote(c);
	else
		putchar(c);
}

void ecomentario()
{
	int c,d;
	
	c = getchar();
	d = getchar();
	
	while(c!='*' || d !='/')
	{
		c =d;
		d = getchar();
	}
}

void quote(int c)
{
	int d;
	
	putchar(c);
	
	while((d=getchar())!=c)
	{
		putchar(d);
		
		if(d = '\\')
			putchar(getchar());
	}
	putchar(d);
}
