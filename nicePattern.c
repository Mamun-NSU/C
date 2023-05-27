
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    int N, S, K;
    scanf("%d", &N);
    S = 1, K = N - 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= S; j++)
        {
            if (i % 2 == 1)
            {
                printf(">");
            }
            else
            {
                printf("<");
            }
        }
        K--;
        S = S + 2;
        printf("\n");
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
            if (i % 2 == 1)
            {
                printf(">");
            }
            else
            {
                printf("<");
            }
        }
        printf("\n");
        K--;
    }

    return 0;
}
