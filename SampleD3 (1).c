#include <stdio.h>
#include <string.h>
int main()
{
    char s[30];
    
    printf("Input name: ");
    gets(s);
    
    printf("%s\n", s);
    
    for (int i = 0; i < strlen(s); i++)
    {
    	if (s[i] >='a' && s[i] <= 'z')
    	{
    		s[i] = toupper(s[i]);
		}
		else
		{
			if (s[i] >='A' && s[i] <= 'Z')
			{
				s[i] = tolower(s[i]);
			}
		}
	}


	printf("%s\n", s);
	
	    
    return 0;
}
