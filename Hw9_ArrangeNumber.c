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
    int j;
    printf("Input size: ");
    scanf("%d", &size);
    
    int arr[size];
    
    for (int i = 0; i < size; i++)
    {
        printf("Input n%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("You input: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    
    for (int i = 0; i < size - 1; i++)
    {
        for ( j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
            }
        }
    }


    
    printf("\nArrange Number From Small To Big: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    
    
    for (int i = 0; i < size; i++)
    {
        for ( j = size - 1; j > i; j--)
        {
            if (arr[i] < arr[j])
            {
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
            }
        }
    }
    
    printf("\nArrange Number From Big To Small: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    
    return 0;
}
