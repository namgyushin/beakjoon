#include <stdio.h>

int t;

int main(void)
{
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if ( (i+j) > t-2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}