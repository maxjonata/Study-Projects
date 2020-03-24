#include <stdio.h>

int main()
{
    int n[3],s[3], x, i;
    x=i=0;

    scanf("%d %d %d", &n[0], &n[1], &n[2]);
    while(i<4)
    {
        s[i] = n[i];
        i++;
    }
    
    for(i = 0; i < 2; i++)
    {
        if( n[i] > n[i+1] )
        {
            x = n[i];
            n[i] = n[i+1];
            n[i+1] = x;
            i = -1;
        }
    }

    printf("%d\n", n[0]);
    printf("%d\n", n[1]);
    printf("%d\n\n", n[2]);
    printf("%d\n", s[0]);
    printf("%d\n", s[1]);
    printf("%d\n", s[2]);
}