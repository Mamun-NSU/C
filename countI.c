#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, evenNum = 0, oddNum = 0;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            evenNum++;
        }
        else
        {
            oddNum++;
        }
    }

    printf("%d %d \n", evenNum, oddNum);
    return 0;
}
