#include <stdio.h>

int main()
{

    int N, K, sum = 1;
    scanf("%d %d", &N, &K);

    //   printf("%d %d \n",N, K);

    for (int i = 0; i < N; i++)
    {

        if (sum < K)
        {
            sum = sum * 2;
        }
        else
        {
            sum = sum + K;
        }
        }

    printf("%d\n", sum);

    return 0;
}