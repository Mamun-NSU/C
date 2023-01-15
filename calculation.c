#include <stdio.h>

int main()
{
    int N;
    float num1, num2;
    float sum = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%f", &num1);
        scanf("%f", &num2);
        sum = sum + num1 * num2;
    }
    printf("%.3f", sum);

    return 0;
}