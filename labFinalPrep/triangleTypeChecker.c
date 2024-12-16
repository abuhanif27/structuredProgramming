#include <stdio.h>

void triangleTypeChecker(int a, int b, int c)
{
    if (a + b <= c || a + c <= b || b + c <= a)
        printf("Invalid Triangle\n");
    else if (a == b && b == c)
        printf("It is equilateral.\n");
    else if (a == b || a == c || b == c)
        printf("It is isosceles.\n");
    else
        printf("It is scalene.\n");
}

void test()
{
    int a, b, c;
    printf("Enter value for side a: ");
    scanf("%d", &a);

    printf("Enter value for side b: ");
    scanf("%d", &b);

    printf("Enter value for side c: ");
    scanf("%d", &c);

    triangleTypeChecker(a, b, c);
}