#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d", &N);

    int A[N][N];
    int flag = 1;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    //   for(int i =0; i<N; i++){
    //       for(int j=0; j<N; j++){
    //           printf("%d", A[i][j]);
    //       }
    //       printf("\n");
    //   }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                if (A[i][j] != 1)
                {
                    flag = 0;
                }
            }
            else
            {
                if (A[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
