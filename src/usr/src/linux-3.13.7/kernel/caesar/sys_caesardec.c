#include <linux/kernel.h>
#include <linux/syscalls.h>

asmlinkage int sys_caesardec(char *src,char *dest, char key) {
	int i;
	i = 0;
	while (src[i] != '\0') {
		dest[i] = (src[i] - key) % 256;
		i++;
	}
	return 0;
}
