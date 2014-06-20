#include <linux/unistd.h>
#include <sys/syscall.h>
#include "commie.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int value,j;
	char sel[255];
	printf("Masukkan set<spasi>angka untuk setmyint(value) atau masukkan get\n");
	scanf("%s",sel);
	if(strncmp(sel,"set",3) == 0) {
		scanf("%d", &value);
		j = setmyint(value);
		if(j==1) printf("Nilai diset %d\n", value);
		else printf("Error! Nilai lama belum di get!\n");
	} else if (strncmp(sel,"get",3) == 0){
		j = getmyint(&value);
		if(j==1) printf("Nilai hasil get %d\n", value);
		else printf("Error! Nilai lama belum di set!\n");
	} else {
		printf("Error! Masukan invalid\n");
	}
	return 0;
}
