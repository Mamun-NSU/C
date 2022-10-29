#include <stdio.h>

int main()
{

    int N;
    // Input N form User
    
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = N - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}