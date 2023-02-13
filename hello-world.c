#include "stdio.h"

#include "stdlib.h"

#define		OK	0

int Helloworld(void);

int main(void)
{
	char key = NULL;

	Helloworld();

	key = getchar();

	return OK;

} //main   

int Helloworld(void)
{
	printf("Hello,world!\n");

	return OK;

} //Helloworld
