

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int max = -10000, min = 99999;

    int maxIndex, minIndex;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] > max)
        {
            max = A[i];
            maxIndex = i;
        }

        if (A[i] < min)
        {
            min = A[i];
            minIndex = i;
        }
    }

    A[maxIndex] = min;
    A[minIndex] = max;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
