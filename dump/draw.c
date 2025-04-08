#include <stdio.h>

int main()
{
    int user_value;
    printf("Enter your value :");
    scanf("%d", &user_value);
    int counter =0;
    for (int i=user_value; i>=0; i--)
    {
        for(int j=i; j>0; j--)
         {
         printf(" ");
        }
        for(int k=0; k<=counter; k++)
         {
         printf("#");
        }
        for (int l = i; l>0; l--)
         {
         printf(" ");
        }
        printf("\n");
        counter=counter+2;
    }
}
int space(int v)
{
    for(int v; v>0; v--)
    {
        printf(" ");
    }
}
int draw()
{

}
