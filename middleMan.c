

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    int temp;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // printf("\nBefore sorting: \n");
    // for(int i=0; i<N; i++){
    //     printf("%d ", A[i]);
    // }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    if (N % 2 == 1)
    {
        printf("%d\n", A[N / 2]);
    }
    else
    {
        printf("%d %d\n", A[N / 2 - 1], A[N / 2]);
    }
    return 0;
}
