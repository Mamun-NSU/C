#include <stdio.h>

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
            printf("*");
        }
        K--;
        S = S + 2;
        printf("\n");
    }

    return 0;
}