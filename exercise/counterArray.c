#include <stdio.h>

void counterArray()
{
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter value of index (%d): ", i);
        scanf("%d", &array[i]);
    }

    int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;

    for (int i = 0; i < n; i++)
    {
        switch (array[i])
        {
            case 0:
                zero++;
            break;
            case 1:
                one++;
            break;
            case 2:
                two++;
            break;
            case 3:
                three++;
            break;
            case 4:
                four++;
            break;
            case 5:
                five++;
            break;
            case 6:
                six++;
            break;
            case 7:
                seven++;
            break;
            case 8:
                eight++;
            break;
            case 9:
                nine++;
            break;
            default:
                printf("This number is not in range 0-9\n");
            break;
        }
    }

    printf("\n");

    printf("0 Found %d times\n", zero);
    printf("1 Found %d times\n", one);
    printf("2 Found %d times\n", two);
    printf("3 Found %d times\n", three);
    printf("4 Found %d times\n", four);
    printf("5 Found %d times\n", five);
    printf("6 Found %d times\n", six);
    printf("7 Found %d times\n", seven);
    printf("8 Found %d times\n", eight);
    printf("9 Found %d times\n", nine);
}