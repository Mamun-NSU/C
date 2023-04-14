
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    long long int sum = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);

        sum = sum + A[i];
    }

    if (sum < 0)
    {
        sum = sum * -1;
        printf("%lld ", sum);
    }
    else
    {
        printf("%lld ", sum);
    }

    return 0;
}
