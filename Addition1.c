// This is Boilar plate code  of C language 

// #include<stdio.h>

// int main()
// {

//     return 0;
// }

// Write a code add two number , user input .
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a\n");           //printf() is a library function to send formatted output to the screen.
    scanf("%d",&a);                             // %d is a format specifier And &a  (& is ampersand )is addrase of a 
                                                // scanf() is a function that stand for Scan formatte String.  
    printf("Enter the value of b\n");
    scanf("%d",&b);

    printf("The sum of a and b is  %d \n ",a +b); // \n is use to swift to Another line 

}