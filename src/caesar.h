#include <linux/unistd.h>

int caesarenc(char *src,char *dest, char key) {
	return syscall(314, src, dest, key);
}
int caesardec(char *src,char *dest, char key) {
	return syscall(315, src, dest, key);
}
