#include <stdio.h>
#include <stddef.h>
int main() {
int arr[] = {10, 20, 30, 40, 50};
int* ptr1 = &arr[2];
int* ptr2 = &arr[4];
// Calculate the difference between two pointers
ptrdiff_t offset = ptr2 - ptr1;
printf("Offset between ptr2 and ptr1: %td\n", offset);
return 0;
}