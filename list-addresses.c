#include <stdio.h>
int uninitialized_var;
void function(){
//get address 
}

int main(){
	int stack_var = 42;
	const char *str = "Hello World!";
	printf("stack variable: 0x%016lX\n",(unsigned long)&stack_var);
	printf("initialized data : 0x%016lX\n", (unsigned long)str);
	printf("uninitialized data: 0x%016lX\n", (unsigned long)&uninitialized_var);
	printf("main: 0x%016lX\n", (unsigned long)&main);
	printf("function: 0x%016lX\n", (unsigned long)&another_function);

	return 0;
}

