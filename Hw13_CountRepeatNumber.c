/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, m;
    
    printf("Input size: ");
    scanf("%d", &n);
    
    int a[n];
    int keys[n];
    int values[n];
    
    //** Or no Input; int a[1000]; int keys[1000]; int values[1000];**//
    
    for (int i = 0; i < n; i++)
    {
        printf("Input a%d: ", i);
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        int j;
        for ( j = 0; j < m; j++)
        {
            if (a[i] == keys[j])
            {
                break;
            }
        }
        if (j == m)
        {
            keys[m] = a[j];
            values[m++] = 1;
        }
        else
        {
            values[j]++; // Value[j++] = increase indext position  || Value[j]++ = Increase value in that position// 
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        printf("Number %d appear %d time(s).\n", keys[i], values[i]);
    }
    

    return 0;
}
