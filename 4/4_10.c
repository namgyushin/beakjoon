#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sub;
    scanf("%d", &sub);
    int *arr = (int *)malloc(sub * sizeof(int));
    int score;
    double max = 0;
    double tot = 0;
    for (int i = 0; i < sub; i++)
    {
        scanf("%d", &score);
        arr[i] = score;
        tot += arr[i];
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("%lf\n", tot / max * 100 / sub);

    return 0;
}