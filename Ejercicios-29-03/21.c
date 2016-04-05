#include<stdio.h>
#define TAMTAB 8

int main(){
	int blancos,nt,pos,c;
	
	blancos = 0;
	nt = 0;
	
	for(pos=1;(c=getchar())!=EOF;++pos)
		if( c == ' ')
		{
		if((pos % TAMTAB) != 0)
			++blancos;
		else
		{
			blancos = 0;
			++nt;
		}
	}
		else 
	{
		for( ; nt > 0 ; --nt)
			putchar('\t');
		if( c == '\t')
			blancos = 0;
		else
			for( ; blancos > 0; --blancos)
				putchar(' ');
		
		putchar(c);
		
		if(c == '\n')
			pos = 0;
		else if ( c == '\t')
			pos = pos + ( TAMTAB - (pos -1) % TAMTAB) - 1;
	}
	
	return 0;
}
