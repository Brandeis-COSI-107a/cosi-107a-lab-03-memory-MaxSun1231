#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	for (int i=1; i<argc;i++){
		long num = strtol (argv[i], NULL,0);
		int byte1 = (num & 0xFF00) >> 8;
		printf("%d 0x%02X %d\n", i, byte1, byte1);
	}
	return 0;
}

