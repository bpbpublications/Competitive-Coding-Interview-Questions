#include <stdio.h>
int main() {
int arr[] = {1, 2, 3, 4, 5};
printf("Size of arr: %zu bytes\n", sizeof(arr));
// Divide the total size by the size of a single element to get the number of elements
printf("Number of elements in arr: %zu\n", sizeof(arr) / sizeof(arr[0]));
return 0;
}