#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	for (int i=1; i<argc;i++){
		int num = atoi(argv[i]);
		printf("0x%016lX\n",(unsigned long)&num);
	}
	return 0;
} 
