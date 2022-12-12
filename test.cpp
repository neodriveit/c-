#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int i, j, k;
	puts("Witamy w Lab WSH");
	for(k=1; k<=100; k++) {
		printf("Nowa epoka %d\n", k);
		for(i=1; i<=10; i++) {
			printf("Epoka %d krok  %d\n", k, i);
		}
	}
	printf("Koniec\n");
	return EXIT_SUCCESS;
}
