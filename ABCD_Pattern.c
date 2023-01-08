#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j;
    char ch='a';
    for(i=1;i<=7;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch=ch+1;
        }
        printf("\n");
    }
    getch();
    return 0;
}