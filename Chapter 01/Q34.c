#include <stdio.h>
#include <stdint.h>
int main() {
int data[] = {10, 20, 30, 40, 50};
int* ptr = &data[2];
// Perform pointer arithmetic and get the memory offset as an intptr_t
intptr_t offset = (intptr_t)(ptr - &data[0]);
printf("Pointer Offset: %td\n", offset);
// Convert the intptr_t offset back to a pointer
int* result_ptr = &data[0] + offset;
printf("Result Pointer: %p\n", (void*)result_ptr);
return 0;
}