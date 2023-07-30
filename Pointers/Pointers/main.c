//
//  main.c
//  Pointers
//
//  Created by George Peshkov on 7/29/23.
//

#include <stdio.h>

int main() {
    // a variable is a memory slot that has been given a name(in the case below, 'x'). Below we are storing the data constant 10 at that memory address.
    int a = 10;
    printf("Variable X is address : %p\n", &a);
    // we can declare a pointer as follows
    int *pa;
    pa = &a;
    printf("Variable pa is currently storing: %p\n", pa);
    // pa stores the address of a value
    // *pa is the value stored in the variable
    int b = *pa; // b is now also 10, but is not tracking the pointer
    printf("b is: %d\n", b);
    *pa = 12; // a is now 12 because we're modifying the value stored in the variable
    printf("a is now: %d\n", a);
    return 0;
    
    /* SUMMARY
     1. A pointer is declared by a '*' in front of var name.
     2. The address of a var is given by & in front of its name.
     3. To obtain or store the value of a variable (pointed at), use '*' in front of a pointer
     */
}
