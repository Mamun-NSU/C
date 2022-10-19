#include <stdio.h>

int main()
{

    int N;
    // Input N form User
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("Goodbye\n");
        }
        else
        {
            printf("Love Programming!\n");
        }
    }

    return 0;
}