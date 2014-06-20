#include <linux/kernel.h>
#include <linux/syscalls.h>

int CharlesZiBritannia = -9999;

asmlinkage int sys_setmyint(int value){
	if (CharlesZiBritannia == -9999) {
		CharlesZiBritannia = value;
		return 1;
	} else {
		return 0;
	}
}

asmlinkage int sys_getmyint(int *dest){
	if (CharlesZiBritannia != -9999) {
		*dest = CharlesZiBritannia;
		CharlesZiBritannia = -9999;
		return 1;
	} else {
		return 0;
	}
}
