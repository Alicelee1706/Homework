#include <stdio.h>

int main ()
{
	char s[100];
	char re[100];
	int length = 0;
	int i;
	
	printf("Input chain: ");
	gets(s);
	
	for (length = 0; s[length]!='\0'; length++) // ask if s[i] is the ending letter or not
	{		}
	
	length--;
	
	for (i = length; i>=0; i--)
	{
		re[length - i] = s[i];
	}
	
	printf("%s\n%s\n", s, re);
	return 0;
}
