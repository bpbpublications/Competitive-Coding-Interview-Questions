#include <stdio.h>
#include <string.h>
int main() {
int sourceArray[] = {1, 2, 3, 4, 5};
int destinationArray[5];
size_t numBytes = sizeof(sourceArray);
// Using memcpy to copy data from sourceArray to destinationArray
memcpy(destinationArray, sourceArray, numBytes);
// Printing the copied data
for (size_t i = 0; i < 5; i++) {
printf("destinationArray[%zu] = %d\n", i, destinationArray[i]);
}
return 0;
}