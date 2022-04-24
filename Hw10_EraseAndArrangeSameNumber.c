/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int size;
    int i, j, k;
    
    printf("Input size: ");
    scanf("%d", &size);
    
    int index[size];
    
    for (i = 0; i < size; i++)
    {
        printf("Input n%d: ", i);
        scanf("%d", &index[i]);
    }
    
    printf("Your Input: ");
    for (i = 0; i < size; i++)
    {
        printf("\t%d", index[i]);
    }
    
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (index[i] == index[j])
            {
                for (k = j; k < size - 1; k++)
                {
                    index[k] = index[k+1];
                }
                size--;
            }
        }
    }
    
    printf("\nAfter Erase Same Number: ");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", index[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (index[i] > index[j])
            {
                int c = index[i];
                index[i] = index[j];
                index[j] = c;
            }
        }
    }
    printf("\nAfter Arrange Number From Small To Big: ");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", index[i]);
    }

    return 0;
}
