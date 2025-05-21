#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	for (int i=1; i<argc; i++){
		long num = strtol(argv[i],NULL,0);
		int low_order = num & 0xFF;
		printf("%d 0x%02X %d\n", i, low_order, low_order);
	}
	return 0;
}
