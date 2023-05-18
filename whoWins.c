#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d", &N);

    int count1 = 0, count2 = 0;

    while (N--)
    {
        int X1, X2;
        scanf("%d %d", &X1, &X2);
        if (X1 > X2)
        {
            count1++;
        }
        else if (X2 > X1)
        {
            count2++;
        }
        else
        {
        }
    }

    if (count1 > count2)
    {
        printf("Tiger\n");
    }
    else if (count2 > count1)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }
    return 0;
}
