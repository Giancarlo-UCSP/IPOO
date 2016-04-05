#include <stdio.h>
#define MAXLINE 1000

int rgetline(char line[],int lim);
int fremove(char rline[]);

int main(){
	int len;
	char line[MAXLINE];
	
	while((len=rgetline(line,MAXLINE))>0)
		if(fremove(line) > 0)
			printf("%s",line);
	
	return 0;
}

int rgetline(char s[],int lim)
{
	int i,c;
	
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
		s[i] = c;
	if( c == '\n')
	{
		s[i]=c;
		++i;
	}
	s[i]='\0';
	
	return i;
}

int fremove(char s[])
{
	int i;
	
	for(i=0; s[i]!='\n'; ++i);
	--i;  
	
	for(i >0; ((s[i] == ' ') || (s[i] =='\t'));--i); 
	
	if( i >= 0)
	{
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}
	return i;
}
