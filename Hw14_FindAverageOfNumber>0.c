/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[1000];
    int n, b, u;
    
    printf("Input n: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        printf("Input n%d: ", i);
        scanf("%d", &a[i]);
    }
 
 u = n;
    
 float k = 0;
    for (int i = 0; i < n; i++)
    { 
        if ( a[i] < 0)
        {
            u = u - 1;
        }
        else
        {
            k += a[i];
        }
    }
    

    printf ("Trung binh cong cac so co gia tri khong am: %f", k/u);

    return 0;
}
