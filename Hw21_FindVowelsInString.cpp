#include <stdio.h>
#include <string.h>

int main ()
{
	char s[100];
	int a;
	a = 0;
	
	printf("Input sentence: ");
	gets(s);
	
	for (int i = 0; i < strlen(s); i++)
	{
		switch (s[i])
		{
			case 'a':
			{
				a++;
				break;
			}
			case 'e':
			{
				a++;
				break;
			}
			case 'u':
			{
				a++;
				break;
			}
			case 'i':
			{
				a++;
				break;
			}
			case 'o':
			{
				a++;
				break;
			}
		}
	}
	
	printf("There are %d in the string", a);
	
	return 0;
}