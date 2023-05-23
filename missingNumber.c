#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int T;
    scanf("%d", &T);

    while (T--)
    {
        int S, A, B, C;
        scanf("%d %d %d %d", &S, &A, &B, &C);
        int ans = S - A - B - C;
        printf("%d\n", ans);
    }
    return 0;
}
