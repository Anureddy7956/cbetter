//Arrays using pointers
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int  *ptr= arr;
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) 
    { 
        printf("Value at arr[%d]: %d, Address: %p\n",arr[i], *(ptr + i), (ptr + i));
    }

    return 0;
}
