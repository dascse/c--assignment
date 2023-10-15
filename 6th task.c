#include<stdio.h>
int main() {
    int i, a,b, j;
    b=a;
    printf("Enter the number");
    scanf("%d", &a);
    for (i = a; i>=1; i--) {
        for (j =1; j<=i;j++) {
            printf("%d",j);
        }
  b--;
        printf("\n");
    }
}//
// Created by Admin on 10/8/2023.
//
