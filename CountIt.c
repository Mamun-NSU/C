#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char S[1000];
    // scanf("%s", S);

    fgets(S, 1000, stdin);

    int Sm = 0, Ct = 0, Sp = 0;
    int i = 0;
    while (S[i] != '\0')
    {

        // printf("%d \n", S[i]);

        if (S[i] >= 65 && S[i] <= 90)
        {
            Ct++;
        }
        else if (S[i] >= 97 && S[i] <= 122)
        {
            Sm++;
        }
        else if (S[i] == 32)
        {
            Sp++;
        }
        else
        {
        }

        i++;
    }

    printf("Capital - %d\nSmall - %d\nSpaces - %d\n", Ct, Sm, Sp);
    return 0;
}
