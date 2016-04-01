#include <stdio.h>

main(){
	int c;
	while((c=getchar())!=EOF){
		if (c==' ' || c=='\t'){
			while((c=getchar())==' ' || c=='\t');
			putchar('\n');
		}
		putchar(c);
	}
}
