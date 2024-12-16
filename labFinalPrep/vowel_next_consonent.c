#include <stdio.h>

char getVowelsNextConsonent(char input)
{
    char output = '0';
    switch (input)
    {
    case 'a':
        output = 'b';
        break;
    case 'A':
        output = 'B';
        break;
    case 'e':
        output = 'f';
        break;
    case 'E':
        output = 'F';
        break;
    case 'i':
        output = 'j';
        break;
    case 'I':
        output = 'J';
        break;
    case 'o':
        output = 'p';
        break;
    case 'O':
        output = 'p';
        break;
    case 'u':
        output = 'v';
        break;
    case 'U':
        output = 'V';
        break;
    default:
        break;
    }
    return output;
}

void test()
{
    char alphabet;
    printf("Enter alphabet: ");
    scanf("%c", &alphabet);

    char resultAlphabet = getVowelsNextConsonent(alphabet);
    if (resultAlphabet == '0')
        printf("Sorry This is already in consonent\n");
    else
        printf("'%c' is an vowel and it's next consonent is: '%c'\n", alphabet, resultAlphabet);
}