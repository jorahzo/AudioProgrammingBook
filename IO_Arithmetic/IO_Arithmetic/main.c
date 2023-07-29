//
//  main.c
//  IO_Arithmetic
//
//  Created by George Peshkov on 7/29/23.
//

#include <stdio.h>

int main() {
    int a, b, c;
    printf("\nPlease enter your first number:\n");
    /* %d is how we specify an input of signed integer.
     scanf also requires the address of the var used for storage.*/
    scanf("%d",&a);
    printf("\nPlease enter your second number:\n");
    scanf("%d",&b);
    c = a+b;
    printf("%d + %d = %d \n",a,b,c);
    return 0;
}
