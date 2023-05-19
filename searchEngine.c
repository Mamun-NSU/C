

#include <stdio.h>

int main()
{

    int T;
    scanf("%d", &T);
    int testCase = 1;
    while (T--)
    {
        int N;
        scanf("%d", &N);
        int A[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        int S;
        scanf("%d", &S);
        int position, flag = 0;

        for (int i = 0; i < N; i++)
        {
            if (A[i] == S)
            {
                position = i + 1;
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            printf("Case %d: %d\n", testCase, position);
        }
        else
        {
            printf("Case %d: Not Found\n", testCase);
        }
        testCase++;
    }

    return 0;
}
