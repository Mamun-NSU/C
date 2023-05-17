

#include <stdio.h>
#include <string.h>

int main()
{

    char S[1000];
    scanf("%s", S);

    int A[26] = {0};

    int i = 0;
    int newIndex;
    while (S[i] != '\0')
    {

        newIndex = S[i] - 'a';
        A[newIndex]++;

        i++;
    }

    char C = 'a';
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d \n", C, A[i]);
        C++;
    }

    return 0;
}