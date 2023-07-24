#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i;
	char arr[] = "Are you ready for the challenge\?\n";
	i = strlen(arr);
	char *ptr = malloc(sizeof(char) * i);
	strcpy(ptr, arr);
	printf("%s\n", ptr);
	printf("The size of ptr is %d\n", i);
	free(ptr);
	return (0);
}
