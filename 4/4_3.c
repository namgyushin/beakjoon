#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int *arr = (int *)malloc(N * sizeof(int));

    int insert;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &insert);
        arr[i] = insert;
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < N; i++)
    {
        if (max < arr[i])
            {
                max = arr[i];
            }
        if (min > arr[i])
            {
                min = arr[i];
            }
        
    }
    
    printf("%d %d\n", min, max);

    free(arr);
    return 0;
}