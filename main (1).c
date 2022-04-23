/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[1000], va[1000], po[1000];
    int n;
    int i, ad;
    
    //va = value added  || pp = position replace || ad: number added//
    
    
    printf("Input size: ");
    scanf("%d", &n);
    
    
    for (i = 0; i < n; i++)
    {
        printf("Input n%d: ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Your Input: ");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    
    printf("\nHow many number you want to add in? \nInput: ");
    scanf("%d", &ad);
    
    for(i = 0; i < ad; i++)
    {
        printf("\nInput s%d: ", i);
        scanf("%d", &va[i]);
        printf("\nInput position to replace: ");
        scanf("%d", &po[i]);
    }
    
    for (int i = 0; i < ad; i++)
    {
        int j;
        for (j = n++; j > po[i]; j--)
        {
            a[j] = a[j-1];
        }
        a[j] = va[i];
    }
    
    
    printf("Result after replace number: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    

    return 0;
}