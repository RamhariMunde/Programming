#include<stdio.h>

int main()
{
    int n1,n2,sum;
    printf("Enter first no. : ");
    scanf("%d",&n1);
    printf("Enter second no : ");
    scanf("%d", &n2);

    sum = n1;
    for(int i=1; i<=n2; i++){
        sum++;
    }
    printf("\nSum is %d", sum );
    return 0;
}