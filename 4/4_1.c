#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int num;
    scanf("%d", &num);

    int *arr = (int *)malloc(num * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1; // 메모리 할당 실패 시 프로그램 종료
    }

    int insert;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &insert);
        arr[i] = insert;
    }

    int check;
    scanf("%d", &check);

    int tot = 0;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == check)
        {
            tot++;
        }
    }

    printf("%d\n", tot);

    free(arr);
    
    return 0;
}