/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[1000];
    int n, max;
    char index[1000];
    max = 0;
    
    printf("Input n: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        printf("Input value%d: ", i);
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    for (int  i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    
    
    for (int i = 0; i < n; i++)
    {
        max = a[i] > max? a[i] : max;
    }
    
    for (int i = 1; i<= max; i++)
    {
        index[i] = 'n';
    }
    
    for (int i = 0; i < n; i++)
    {
        index[a[i]] = 'y';
    }
    
    printf("\nNew Index:");
    
    for (int i = 1; i <=max; i++)
    {
        printf("%c ", index[i]);
    }
    
    printf("\nMissing Numbers: ");
    
    for (int i = 1; i <=max; i++)
    {
        if(index[i] == 'n')
        {
            printf("%d ", i);
        }
    }

    
    return 0;
}

