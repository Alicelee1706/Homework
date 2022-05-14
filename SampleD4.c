#include <stdio.h>
#include <string.h>

int main ()
{
	char n[100];
	printf("Input name: ");
	gets(n);
	
	printf("%s", strrev(n));
	
	return 0;
}
