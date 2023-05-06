#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);

    int K = N - 1;

    for (int i = 1; i <= N; i++)
    {
        for (int j = K; j >= 1; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        K--;
    }

    K = N - 1;
    for (int i = N - 1; i >= 1; i--)
    {
        for (int j = K; j < N; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        K--;
    }

    return 0;
}
