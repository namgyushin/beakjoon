#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr = (int *)malloc(30 * sizeof(int));
    for (int i = 0; i < 30; i++)
    {
        arr[i] = 0;
    }
    
    int id;
    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &id);
        arr[id - 1] = 1;
    }
    for (int i = 0; i < 30; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d\n", i + 1);
        }
        
    }
    
    

    return 0;
}