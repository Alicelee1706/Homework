#include <stdio.h>
struct hs
{
	char name[50];
	int yob;
	char email[50];
	int gender;
};
	
char* line(char c, int len)
{
	static char s[50];
	for (int i = 0; i < 50; i++)
	{
		s[i] = c;
	}
	s[len] = '\0';
	return s;
}

int strlen(char s[])
{
	int len = 0;
	for (; s[len] != '\0'; len++)
	{ }
	return len;
}

char* center(char s[], int length)
{
	int len = length - strlen(s);
	len /= 2;
	static char s1[1000];
	for (int i = 0; i < len; i++)
	{
		s1[i] = 32;
	}
	for (int i = 0; i < strlen(s); i++)
	{
		s1[len + i] = s[i];
	}
	for (int i = len + strlen(s); i < length; i++)
	{
		s1[i] = ' ';
	}
	s1[length]='\0';
	return s1;
}

char* alignLeft(char s[], int len)
{
	static char s1[1000];
	for (int i = 0; i < strlen(s); i++)
	{
		s1[i] = s[i];
	}
	for (int i = strlen(s); i < len; i++)
	{
		s1[i] = 32;
	}
	s1[len] = '\0';
	return s1;
}

void printTable (char k)
{
	printf("+%s+", line(k,52));		
	printf("%s+", line(k,20));
	printf("%s+", line(k,10));
	printf("\n");
}
void printTitle()
{
	char title[][50] = {"Full Name", "Year of Birth", "Gender"};
	
	printTable('=');
	printf("| %s ", center(title[0], 48));
	printf("| %s ", center(title[1], 18));
	printf("| %s |\n", center(title[2], 8));
	printTable('=');
}

void showAll(struct hs list[], int size)
{
	char gender[][10] = {"Unknown", "Female", "Male"};
	
	printTitle();
	for (int i = 0; i < size; i++)
	{
		printf("| %s ", alignLeft(list[i].name, 48));
		printf("|%8s%04d%8s", " ", list[i].yob, " ");
		if (list[i].gender >= 0 && list[i].gender <= 2)
		{
			printf("| %s |\n", center(gender[list[i].gender], 8));
		}
		printTable('-');
	}
}

void saveFile(struct hs list[], int size)
{
	FILE *StudentList;
	StudentList = fopen("D:\\SL\\hs.txt", "w");  //Please change the adress when testing it
	if (StudentList == NULL)
	{
		printf("Can't create file'");
		return;
	}
	for (int i = 0; i < size; i++)
	{
		fwrite(&list[i], sizeof(struct hs), 1, StudentList);
		if (fwrite == 0) 
		{
			printf("Can not saving");
			return;
		}
	}
	fclose(StudentList);
}

void readFile(char filePath[])
{
	FILE *d;
	d = fopen(filePath, "r");
	if (d == NULL)
	{
		printf("Can't read file");
		return;
	}
	struct hs list[1000];
	int i = 0;
	while (fread(&list[i], sizeof(struct hs), 1, d))
	{
		i++;
	}
	fclose(d);
	showAll(list, i);
}

int main ()
{
	struct hs list[100];
	int n, u;
	
	char func[][30] = {"1) Load File", "2) Input Data", "3) Show Data", "4) Save File", "5) Exit"};
	
	Begin:
	for (int i = 0; i <= 3; i++)
	{
		printf("| %s ", center(func[i], 20));
	}
	printf("| %s |\n", center(func[4], 20));

	
	printf("\nChoose one of the function (input number):");
	scanf("%d", &u);
	
	switch(u)
	{
		case 1:
		{
			readFile("D:\\SL\\hs.txt"); //Please change the adress when testing it
			break;
		}
		case 2:
		{
			printf("Input student size: ");
			scanf("%d%*c", &n);
			for (int i = 0; i < n; i++)
			{
				printf("Full Name: ");
				gets(list[i].name);
				printf("Year of Birth: ");
				scanf("%d%*c", &list[i].yob);
				printf("Gender: ");
				scanf("%d%*c", &list[i].gender);
			}
			break;
		}
		case 3:
		{
			showAll(list, n);	
			break;
		}
		case 4:
		{
			saveFile(list, n);
			break;
		}
		case 5:
		{
			return 0;
		}
		default:
		{
			printf("\nThat is not an option to choose, goodbye :))");
			return 0;
		}
	}
	
	printf("\nIs there anything else you want to do today?\n\n");
	goto Begin;

}
