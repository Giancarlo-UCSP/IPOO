#include <stdio.h>

#define COL 50
#define VALTAB 8

char line[COL];
int tab(int pos);
int print(int pos);
int blancos(int pos);
int nuevapos(int pos);

int main(){
	int pos,c;
	pos = 0;
	
	while((c=getchar())!=EOF)
	{
		line[pos] = c;
		
		if( c == '\t')
			pos = tab(pos);
		if( c == '\n')
		{
			print(pos);
			pos = 0;
		}
		else if( ++pos >= COL )
		{
			pos = blancos(pos);
			print(pos);
			pos = nuevapos(pos);
		}
	}
	return 0;
}

int tab(int pos)
{
	line[pos] = ' ';
	
	for(++pos; (pos < COL)&&((pos % VALTAB)!= 0); ++pos)
		line[pos] = ' ';
	
	if( pos >= COL)
	{
		print(pos);
		return 0;
	}
	else
		return pos;
}

int print(int pos)
{
	int i;
	for(i = 0; i < pos; ++i)
		putchar(line[i]);
	if( pos > 0)
		putchar('\n');
}

int blancos(int pos)
{
	if( pos > 0)
		while( line[pos] != ' ')
			--pos;
	if(pos == 0)
		return COL;
	else
		return pos + 1;
}
int nuevapos(int pos)
{
	int i,j;
	
	if(pos <= 0 || pos >= COL)
		return 0;
	else
	{
		i = 0;
		for(j=pos;j < COL; ++j,++i)
			line[i] = line[j];  
	}
	return i;
}
