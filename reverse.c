#include <stdio.h>

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int *ptr = arr; // initialize pointer to the first element of the array
    int n = sizeof(arr) / sizeof(int); // get the size of the array
    int i;
    
    // print the array in forward direction
    printf("Forward direction: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *ptr); // dereference the pointer to get the element value
        ptr++; // increment the pointer to point to the next element
    }
    
    // print the array in reverse direction
    printf("\nReverse direction: ");
    ptr--; // move the pointer to the last element of the array
    for (i = 0; i < n; i++) {
        printf("%d ", *ptr); // dereference the pointer to get the element value
        ptr--; // decrement the pointer to point to the previous element
    }
    
    return 0;
}
