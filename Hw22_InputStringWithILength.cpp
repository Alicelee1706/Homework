#include <stdio.h>

#include <string.h>

int main()
{
	char a1[100];

	char a2[100];

	int i, l;

	int n = 0;

	printf("Input string: ");
	fgets(a1, sizeof(a1), stdin);

	printf("Input i: ");
	scanf("%d", &i);

	printf("Input l: ");
	scanf("%d", &l);

	for (int j = i; j <= l + 1; j++)
	{
		a2[n] = a1[j];
		n++;
	}

	printf("\n");

	for (int j = 0; j < l; j++)
	{
		printf("%c", a2[j]);
	}

	return 0;
}