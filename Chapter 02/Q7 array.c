#include <stdio.h>
int* calculate(int a, int b) {
int* result = malloc(2 * sizeof(int));
result[0] = a + b;
result[1] = a - b;
return result;
}
int main() {
int x = 10, y = 5;
int* result = calculate(x, y);
printf("Sum: %d, Difference: %d\n", result[0], result[1]);
free(result);
return 0;
}