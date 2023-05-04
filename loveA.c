#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0, m = 0;

    char str[100];
    fgets(str, 100, stdin);

    int n = strlen(str) - 1;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a')
            count++;
    }

    m = n / 2;
    if (count > m)
    {
        printf("%d\n", n);
    }
    else
    {
        printf("%d\n", count * 2 - 1);
    }

    return 0;
}