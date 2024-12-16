#include <stdio.h>
#include <string.h>

int pallindrome(char str[])
{
    char reverse[20];

    int len_str = strlen(str);
    int count = 0;
    for (int i = len_str - 1; i >= 0; i--)
    {
        reverse[count] = str[i];
        count++;
    }
    reverse[count] = '\0';
    if (strcmp(str, reverse) == 0)
        return 1;
    return 0;
}

void test()
{
    char string[20];
    printf("Enter a word: ");
    fgets(string, sizeof(string), stdin);
    int len = strlen(string);
    string[len - 1] = '\0';

    int isPallindrome = pallindrome(string);
    if (isPallindrome)
        printf("%s is a pallindrome word because it's reverse is also same!\n", string);
    else
        printf("%s is not a pallindrome word because it's reverse is not the sams :(\n", string);
}