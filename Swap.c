// Write a program to swap two number without using third variable ?

// #include<stdio.h>

// int main()
// {
//     int a = 10, b = 20;
//     printf("Before swap a=%d b=%d", a,b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("\nAfter swap a=%d b=%d",a,b);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    
    printf("Enter a value of a :");
    scanf("%d", &a);

    printf("Enter a value of b :");
    scanf("%d", &b);

    printf("Before swap a = %d b=%d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swap a = %d b=%d", a, b);

    return 0;
}
