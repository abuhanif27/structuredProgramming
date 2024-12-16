#include <stdio.h>
#include <string.h>

void printCharInReverse(char str[])
{
    int len = strlen(str);
    printf("String in Reverse are: ");
    for (int i = len - 1; i >= 0; i--)
        printf(" %c ", str[i]);
    printf("\n");
}

void test()
{
    char myString[20];
    printf("Enter your String: ");
    fgets(myString, sizeof(myString), stdin);
    int len = strlen(myString);
    myString[len - 1] = '\0';

    printCharInReverse(myString);
}