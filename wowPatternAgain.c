#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
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
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        K--;
        S = S + 2;
        printf("\n");
    }
    return 0;
}
