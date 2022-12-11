// 1
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=4; i++) //rows
    {
        for (j=1; j<=i; j++) // columns
        {
            printf("* ");

        }
        printf("\n");
    }
    return 0;
}

//output
// *
// **
// ***
// ****

// 2

// #include <stdio.h>
// int main()
// {
//     int i,j;
//     for(i=i; i<=4; i++) // rows
//     {
//         for (j=5; j>=i; j--) //colums
//         {
//             printf("*"); // you have to some space add this ("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// output 

// *****
// ****
// ***
// **
// *

// 3

// #include <stdio.h>
// int main()

// {
//     int i,j,k;
//     for (i=1; i<=5; i++) //rows
//     {
//         for (j=i; j<5; j++) //space
//         {
//             printf(" ");
//         }
//         for (k=1;k<=i;k++) // columns
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// output 
//     *
//    **
//   ***
//  ****
// *****


// 4

// #include <stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1; i<=5; i++) //rows
//     {
//         for (j=1; j<i; j++) // space
//         {
//             printf(" ");
//         }
//         for (k=i; k<=5; k++)//columns
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// output
// *****
//  ****
//   ***
//    **
//     *