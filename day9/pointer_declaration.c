#include <stdio.h>

int main(void)
{
    int n,o;
    int m = 10;
    int *a = &m; // Declaring an integer pointer z and assigning the address of m to it

    // Printing basic information about pointers and variables
    printf("\n\n Pointer : Show the basic declaration of pointer :\n");
    printf("----------------------------------------------------------------------\n");
    printf(" Here is m=10, n and o are two integer variable and *z is an integer");
    printf("\n\n z stores the address of m  = %p\n", a); 
    printf("\n *z stores the value of m = %i\n", *a); 
    printf("\n &m is the address of m = %p\n", &m);
    printf("\n &n stores the address of n = %p\n", &n); 
    printf("\n &o  stores the address of o = %p\n", &o); 
    printf("\n &z stores the address of a = %p\n\n", &a); 
}