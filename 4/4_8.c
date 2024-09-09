#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int *arr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        arr[i] = num % 42;
    }

    int res = 0;
    for (int i = 0; i < 10; i++)
    {
        int cnt = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
            }
            
        }
        if (cnt == 0)
        {
            res++;
        }
        
    }
    
    printf("%d\n", res);
    free(arr);
    return 0;
}