#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y);
int main(void)
{
    int N = 0;
    scanf("%d", &N);
    int *Narr = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; ++i) 
    {
        Narr[i] = i+1;
    }

    int M = 0;
    scanf("%d", &M);

    int a = 0;
    int b = 0;
    for (int i = 0; i < M; i++)
    {
        scanf("%d%d", &a, &b);
        swap(&Narr[a-1], &Narr[b-1]);
    }

    for (int i = 0; i < N; ++i) 
    {
        printf("%d ", Narr[i]);
    }
    printf("\n");

    return 0;
}

void swap(int *x, int *y) {
    int temp = *x; // a의 값을 임시 변수에 저장
    *x = *y;       // b의 값을 a에 저장
    *y = temp;     // 임시 변수에 저장된 값을 b에 저장
}