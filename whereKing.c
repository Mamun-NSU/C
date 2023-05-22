
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);
        int A[N];

        int leftSum, rightSum, flag = 0, index;

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        //   for(int i=0;i<N; i++){
        //       printf("%d",A[i]);
        //   }
        //   printf("\n");

        for (int i = 0; i < N; i++)
        {
            leftSum = 0;
            rightSum = 0;

            for (int j = 0; j < i; j++)
            {
                leftSum = leftSum + A[j];
            }

            for (int j = i + 1; j < N; j++)
            {
                rightSum = rightSum + A[j];
            }

            if (leftSum == rightSum)
            {
                flag = 1;
                index = i;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d\n", index);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
