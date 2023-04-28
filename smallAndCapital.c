#include <stdio.h>
#include <string.h>

int main()
{

    char S[1000];
    int count1 = 0, count2 = 0;
    scanf("%s", S);

    int i = 0;
    while (S[i] != '\0')
    {

        if (S[i] >= 97)
        {
            count1++;
        }
        else
        {
            count2++;
        }
        i++;
    }

    printf("%d %d \n", count2, count1);

    return 0;
}