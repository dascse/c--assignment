//Write a program in c to change the value of a variable by taking an input from the user.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("%d\n",a);
    printf("%d\n",++a);
}
