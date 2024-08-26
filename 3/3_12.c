#include <stdio.h>

int a, b;

int main(void)
{
    while (1)
    {
        if (scanf("%d%d", &a, &b) == EOF)       //EOF 찾아보기!!!!!!!!!!!!
        {
            break;
        }

        a + b;

        printf("%d\n", a + b);
        
    }
    

    return 0;
}