#include <stdio.h>
struct Result {
int sum;
int difference;
};
struct Result calculate(int a, int b) {
struct Result result;
result.sum = a + b;
result.difference = a - b;
return result;
}
int main() {
int x = 10, y = 5;
struct Result result = calculate(x, y);
printf("Sum: %d, Difference: %d\n", result.sum, result.difference);
return 0;
}