#include <stdio.h>

int main()
{

    int number;
    scanf("%d", &number);
    if (number != 42 && number < 100)
    {
        printf("%d\n", number);
        return main();
    }
    return 0;
}