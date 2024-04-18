#include <stdio.h>
 
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array
 
    printf("Initial address of the pointer: %p\n", ptr);
 
    // Pointer Arithmetic operations
    ptr++; // Move the pointer to the next element in the array
    printf("After ptr++ (move to the next element): %p\n", ptr);
 
    ptr--; // Move the pointer back to the previous element
    printf("After ptr-- (move back to the previous element): %p\n", ptr);
 
    ptr += 2; // Move the pointer two elements forward
    printf("After ptr += 2 (move two elements forward): %p\n", ptr);
 
    ptr -= 2; // Move the pointer two elements back
    printf("After ptr -= 2 (move two elements back): %p\n", ptr);
 
    int value = *ptr; // Dereferencing the pointer to get the value at the current address
    printf("Value at the current address: %d\n", value);
 
    int diff = ptr - arr; // Pointer subtraction gives the index of the element in the array
    printf("Index of the current element in the array: %d\n", diff);
 
    return 0;
}
