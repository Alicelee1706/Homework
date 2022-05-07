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
    return;
}

void increase (int a[100][100], int n, int j)
{
     for (int i = 0; i < n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            if (a[i][j] > a[k][j])
            {
                 int c = a[i][j];
                 a[i][j] = a[k][j];
                 a[k][j] = c;
            }
        }
    }
    return;
}

void decrease (int a[100][100], int m, int j)
{
     for (int i = 0; i < m; i++)
    {
        for (int u = i + 1; u < m; u++)
        {
            if (a[i][j] < a[u][j])
            {
                 int b = a[i][j];
                 a[i][j] = a[u][j];
                 a[u][j] = b;
            }
        }
    }
    return;
}

int main()
{
    int n, m, i, j;
    
    printf("Input n: ");
    scanf("%d", &n);
    
    printf("Input m: ");
    scanf("%d", &m);
    
    int a[100][100];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Input a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    xuat (a, n, m);
    printf("\n");
    
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            decrease (a, n, i);
        }
        else
        {
            increase (a, n, i);
        }
    }
    
    xuat (a, n, m);
    
    
   

    return 0;
}
