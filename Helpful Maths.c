#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 100
int main()
{

    char str[101];

    scanf("%s", str);

    int n = strlen(str);

    int number = n / 2 + 1;
    char Arr[number];

    for (int i = 0, j = 0; i < n, j < number; i = i + 2, j++)
    {

        Arr[j] = str[i];
    }

    char a;
    for (int i = 0; i < number; ++i)
    {
        for (int j = i + 1; j < number; ++j)
        {
            if (Arr[i] > Arr[j])
            {
                a = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = a;
            }
        }
    }

    for (int i = 0; i < number; i++)
    {
        printf("%c", Arr[i]);
        if (i < number - 1)
        {
            printf("+");
        }
    }

    return 0;
}
