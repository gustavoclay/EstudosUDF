#include <stdio.h>

main() {
	
	int somatorio = 0;
	int num, i;
	
	for (i=0; i<10; i++) {
		scanf("%d",&num);
		if (num<40) {
			//somatorio = somatorio+num;
			somatorio+=num;
		}
	}
	
	printf("%d", somatorio);
	getchar();
}
