#include <linux/unistd.h>
#include <sys/syscall.h>
#include "caesar.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT_SIZE 256
#define Geass char

int main() {
	Geass* CC;
	Geass* VV;
	Geass Zero[MAX_INPUT_SIZE];
	Geass key;
	int i,j;
	
	printf("Masukkan string yang akan di enkripsi : ");
	fgets(Zero,MAX_INPUT_SIZE,stdin);
	
	printf("Masukkan char key pergeseran : ");
	scanf("%c", &key);
	
	i = 0;
	while (Zero[i] != '\0' && Zero[i] != '\n') {
		i++;
	}
	CC = malloc(sizeof(Geass)*i);
	VV = malloc(sizeof(Geass)*i);	
	
	printf("String hasil enkripsi : ");	
	j = caesarenc(Zero,CC,key);
	i = 0;	
	while (CC[i] != '\0' && Zero[i] != '\n') {
		printf("%c", CC[i]);
		i++;
	}
	printf("\n");
	
	
	printf("String hasil dekripsi dari enkripsi diatas : ");
	j = caesardec(CC,VV,key);
	i = 0;	
	while (VV[i] != '\0') {
		printf("%c", VV[i]);
		i++;
	}
	printf("\n");
	return 0;
}
