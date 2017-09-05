#include <stdio.h>


main() {
	int i, j, res;
	
	for (j=1; j<=10; j++) {
		for (i=1; i<=10; i++) {
			res = j * i;
			printf("\n%d x %d = %d",j,i,res);
		}	
		printf("\n");	
	}
	
	
	
	
	getchar();
	
}
