#include <stdio.h>
void cyclicRotateUsingAuxiliary(int arr[], int n, int k) {
int temp[n]; // Create an auxiliary array
for (int i = 0; i < n; i++) {
temp[(i + k) % n] = arr[i]; // Calculate new index after rotation
}
for (int i = 0; i < n; i++) {
arr[i] = temp[i]; // Copy elements back to the original array
}
}
int main() {
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]);
int k = 2; // Number of positions to rotate
cyclicRotateUsingAuxiliary(arr, n, k);
printf("Rotated array: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}