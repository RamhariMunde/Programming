#include<stdio.h>

int main()
{
    int a,b,c,smallest;
    printf("Enter three number : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    smallest=a;
    if(b<smallest){
        smallest=b;
    }
    if(c<smallest){
        smallest=c;
    }
    printf("\n%d is smallest.", smallest);
    return 0;
    }