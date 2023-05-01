#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N, K;
    scanf("%d %d", &N, &K);
    while (K)
    {
        for (int i = 1; i <= N; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
        K--;
    }
    return 0;
}