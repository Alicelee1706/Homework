/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int gl(int t)
{
    int n=0;
    for ( ; t!=0 ; t/=10, n++)
    { }
    return n;
}


int main()
{
    int m[1000];
    int n;
    
    printf("Input size: ");
    scanf("%d", &n);
    
    for (int i=0; i<n;i++)
    {
        printf("Input value%d: ", i);
        scanf("%d", &m[i]);
    }
    
    
    
    for (int i = 0; i<n; i++)
    {
        printf("So %d co chieu dai la: %d\n", m[i], gl(m[i]));
    }
    return 0;
}
