//prosty kalkulator

#include<stdio.h>

main() {
	
	float a, b;
	printf(">>Prosty kalkulator<<\n\n\n");
	printf("Podaj pierwsza liczbe: ");
	scanf("%f", &a);	
	printf("Podaj druga liczbe: ");
	scanf("%f", &b);
	printf("\n\n");
	
	printf("Suma liczb: %f\n", a+b);
	printf("Roznica liczb: %f\n", a-b);
	printf("Iloczyn liczb: %f\n", a*b);
	printf("Iloraz liczb: %f\n", a/b);
	
	return(0);
}
