#include <stdio.h>

int main()
{

    int N;
    char ch;
    int count1 = 0;
    int count2 = 0;

    scanf("%d", &N);
    for (int i = 0; i <= N; i++)
    {
        scanf("%c", &ch);

        printf("%c \n", ch);
        if (ch == 'A')
        {
            count1++;
        }
        if (ch == 'D')
        {
            count2++;
        }
    }

    if (count1 > count2)
    {
        printf("Anton \n");
    }
    else if (count2 > count1)
    {
        printf("Danik \n");
    }
    else
    {
        printf("Friendship \n");
    }

    return 0;
}