#include <stdio.h>

int main() {
    int a=5;               
    int *ptr = &a;          // Initialize a pointer to point to 'a'

    // a=5, and 'a' has address 0xaff, 'ptr' has address 0xbff.

    printf("\nValues based on your question:\n");
    printf("a: %d\n", a);            // Value of 'a' =5
    printf("*ptr: %d\n", *ptr);      // Dereference pointer 'ptr' (value of 'a') =5
    printf("ptr: %p\n", ptr);        // Address of 'a' stored in 'ptr' =0xaff
    printf("&ptr: %p\n", &ptr);      // Address of 'ptr' =0xbff
    printf("&a: %p\n", &a);          // Address of 'a' =0xaff
    printf("&*ptr: %p\n", &*ptr);    // Address of 'a' (equivalent to &a) =0xaff

    return 0;
}
