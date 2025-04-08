#include <stdio.h>

int main()
{
    int value;
    printf("How long do you want the triangle to be ? : ");
    scanf("%d", &value);
    for(int i=value; i>=0; i--)
        {
        for(int k=i; k>=0; k--)
        {
        printf("*");
        }
        printf("\n");
    }
}

