#include <linux/unistd.h>

int setmyint(int value) {
	return syscall(316, value);
}
int getmyint(int *dest) {
	return syscall(317, dest);
}
