#include <stdio.h>

int main()
{

    int N;
    // Input N form User
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0 && i % 7 == 0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}