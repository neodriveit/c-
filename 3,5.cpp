#include <stdio.h> 
#define N 10 
int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
int b[] = {11,12, 13, 14, 15, 16, 17, 18, 19, 20}; 
int c[10]; 
int i;

int print_wekt(int a[], int size) {
	for(i=0; i<N; i++){
		printf("%d ", a[i]);
	}printf("\n");
}

int dodaj_wekt(int a[], int b[], int c[], int size) {
	for(i=0;i<N;i++) {
		c[i]=a[i]+b[i];
	}
}
int mnoz_wekt(int a[],int b[], int c[],int size){
	for(i=0;i<N;i++) {
		c[i]=a[i]*b[i];
		}
	
}

int main(void) { 
 print_wekt(a,N); 
 print_wekt(b,N); 
 dodaj_wekt(a,b,c,N); 
 print_wekt(c,N); 
 mnoz_wekt(a,b,c,N); 
 print_wekt(c,N); 
}
