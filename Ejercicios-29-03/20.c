#include<stdio.h>
#define TAMTAB 8

int main(void)
{
	int blancos,pos,c;
	
	blancos = 0;
	pos = 1;
	
	while((c=getchar())!=EOF)
	{
		if( c == '\t')
		{
			blancos = TAMTAB - (( pos - 1) % TAMTAB);
			
			while( blancos > 0)
			{
				putchar('#');
				++pos;
				--blancos;
			}
		}
		else if( c == '\n')
		{
			putchar(c);
			pos = 1;
		}
		else
		{
			putchar(c);
			++pos;
		}
	}
	
	return 0;
}
