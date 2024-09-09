#include <stdio.h>
#include <stdlib.h>

void swap(int arr[], int a, int z);

int main(void)
{
    int num;
    int insert;
    scanf("%d", &num);
    scanf("%d", &insert);
    int *arr = (int*)malloc(num * sizeof(int));

    for (int i = 0; i < num; i++)
    {
        arr[i] = i+1;
    }

    int a, z;
    for (int i = 0; i < insert; i++)
    {
        scanf("%d", &a);
        scanf("%d", &z);
        a--;
        z--;

        swap(arr, a, z);
    }
    
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void swap(int arr[], int a, int z)
{
    while (a < z)
    {
        int temp = arr[a];
        arr[a] = arr[z];
        arr[z] = temp;
        a++;
        z--;
    }
    
    
}
