/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void xuat (int a[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%03d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, m, i, j;
    int max, min, middle;
    
    max = 0;
    min = 0;
    
    printf("Input n: ");
    scanf("%d", &n);
    
    printf("Input m: ");
    scanf("%d", &m);
    
    int a[100][100];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    xuat (a, n, m);
    
    for (int i = 0; i < n; i++)
    {
        max = 0;
        min = a[i][0];
        for (int j = 0; j < m; j++)
        {
            max = a[i][j] > max? a[i][j] : max;
            min = a[i][j] < min? a[i][j] : min;
        }
        printf("Max row%d: %03d \n", i, max);
        printf("Min row%d: %03d \n", i, min);
        middle = (max+min)/2;
        int k;
        for(k = 0; k < n; k++) {
            if(a[i][k] == middle)
            {
                printf(" Middle row%d: %03d \n", i, middle);
                break;
            }
        }
        if(k >= n)
        { 
            printf("n/a\n");
        }
    }
    
    return 0;
}

