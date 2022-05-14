#include <stdio.h>
#include <string.h>

int find_p(char n[], char c)
{
	for (int i = 0; i < strlen(n); i++)
	{
		if (n[i] == c)
		{
			return i;
		}
	}
	return -1;

}

int main ()
{
	char n[100];
	char s[100];
	int len[1000];
	printf("Input chain: ");
	gets(n);
	
	
	for (int i = 0; i < strlen(n); i++)
	{
		int p = find_p(s, n[i]);
		long int m = strlen(s);
		if (p == -1)
		{
			s[m] = n[i];
			s[m+1] = '\0';
			len[n[i]] = 1;
			continue;
		}
		if (len[n[i]] < 5)
		{
			int j;
			for (j = m; j > p; j--)
			{
				s[j] = s[j-1];
			}
			s[m+1] = '\0';
			s[p] = n[i];
			len[n[i]]++;

		}
	}
	
	for (int i = 0; i < strlen(s); i++)
	{
		if (len[s[i]] > 1)
		{
			int p = find_p(s, s[i]);
			long int m = strlen(s);
			int j;
			for ( j = m + 2; j > p + len[s[i]]; j--)
			{
				s[j] = s[j-2];
			}
			s[j] = '<';
			s[j+1] = '>';
			len[s[i]] = 0;
		}
	}
	
	printf("%s\n%s\n", n, s);
	
	return 0;
}
