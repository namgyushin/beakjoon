#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[9] = {};

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    int res = 0;
    int st;
    for (int i = 0; i < 9; i++)
    {
        if(res < arr[i] )
        {
            res = arr[i];
            st = i + 1;
        }
    }

    printf("%d\n", res);
    printf("%d\n", st);
    
    return 0;
}