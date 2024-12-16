#include <stdio.h>
#include <string.h>

void firstAndLastSum2()
{
    int number = 123;
    char s[20];
    sprintf(s, "%d", number);

    int len = strlen(s);

    int first = (int)s[0] - 48;
    int last = (int)s[len - 1] - 48;

    printf("first and last digit sum: %d\n", first + last);
}