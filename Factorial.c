#include <stdio.h>
#include<conio.h>

int main()
{
    int n,fact=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    for (int i=n; i>=1; i++){
    fact *=i;
    }
    printf("\n Factorial of %d = %d",n ,fact);
    getch();
    return 0;
}