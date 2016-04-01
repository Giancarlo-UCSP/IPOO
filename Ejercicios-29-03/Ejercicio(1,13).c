#include <stdio.h>

main(){
	int c;
	
	/*Horizontal*/
	while((c=getchar())!=EOF){
		if (c==' ' || c=='\t' || c=='\n')
			putchar('\n');
		else{
			putchar('°');
		}
	}
	
	/*Vertical
	while((c=getchar())!=EOF){
		if (c==' ' || c=='\t' || c=='\n')
			putchar('\n');
		else{
			putchar('°');
			putchar('\n');
		}
	}
	*/
}
