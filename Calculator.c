#include <stdio.h>

int main()
{
    printf("Hello World");
    printf("This is test purpose.");

    int A, B;

    scanf("%d %d", &A, &B);

    char ch;

    scanf("%c", &ch);

    int result;

    if (ch == "+")
    {
        result = A + B;
    }
    else if (ch == "-")
    {
        result = A - B;
    }
    else if (ch == "/")
    {
        result = A / B;
    }
    else if (ch == "*")
    {
        result = A * B;
    }
    else
    {
        result = 0;
    }

    printf("%d", result);

    return 0;
}