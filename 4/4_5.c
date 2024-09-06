#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N = 0;
    scanf("%d", &N);
    int *Narr = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; ++i) 
    {
        Narr[i] = 0;
    }

    int M = 0;
    scanf("%d", &M);

    int a;
    int z;
    int num;
    for (int i = 0; i < M; i++)
    {
        scanf("%d%d%d", &a, &z, &num);
        for (int i = a-1; i < z; i++)
        {
            Narr[i] = num;
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", Narr[i]);
    }
    printf("\n");
    

    return 0;
}