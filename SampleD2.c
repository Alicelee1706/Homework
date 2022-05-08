#include <stdio.h>
#include <string.h>

int main ()
{
	char s[]= "Hello World";
	
	printf("%s\n", strchr(s, 'e'));
	
	printf("%s\n", s);
	
	char s1[]= "";
	
	strcpy(s1, strchr(s,'l')); //something wrong
	
	printf("%s\n", s);
	
	printf("%s\n", s1);
	
	char* s2;
	
	s2 = strchr(s, 'W');
	
	printf("%s\n", s2);
	
	printf("%s\n", s);
	
	printf("%s", strstr(s, "ell"));
	return 0;
}