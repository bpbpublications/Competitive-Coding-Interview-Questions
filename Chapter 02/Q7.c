#include <stdio.h>
void calculate(int a, int b, int *sum, int *difference) {
*sum = a + b;
*difference = a - b;
}
int main() {
int x = 10, y = 5, sum, diff;
calculate(x, y, &sum, &diff);
printf("Sum: %d, Difference: %d\n", sum, diff);
return 0;
}