#include <stdio.h>

int a, b;

int main(void)
{
    while (1)
    {
        scanf("%d%d", &a, &b);

        if ((a == 0) && (b == 0))
        {
            break;
        }

        a + b;

        printf("%d\n", a + b);
        
    }
    

    return 0;
}