#include <stdio.h>
#include <string.h>

int main()
{
	char a1[100];
	char a2[100]= " ";

	int n = 0;
	int t = 0;

	printf("Input string: ");
	gets(a1);

	for (int i = strlen(a1) - 1; i >= 0; i--)
	{
		a2[n++] = a1[i];
		a2[n] = '\0';
	}

	for (int i = 0; i < strlen(a1) ; i++)
	{
		if (a2[i] != a1[i])
		{
			t++;
		}	
	}

	if (t == 0)
		printf("%s is palindrome", a1);
	else 
		printf("%s is not palindrome", a1);

	return 0;
}