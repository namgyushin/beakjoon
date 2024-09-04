#include <stdio.h>
#include<stdlib.h>


int main(void)
{
    int num;
    int X;
    int insert;

    scanf("%d", &num);
    scanf("%d", &X);
    
    int *A = (int *)malloc(num * sizeof(int));

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &insert);

        A[i] = insert;
    }

    for (int i = 0; i < num; i++)
    {
        if (A[i] < X)
        {
            printf("%d ", A[i]);
        }
        
    }
    printf("\n");
    
    free(A);

    return 0;
}