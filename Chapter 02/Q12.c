#include <stdio.h>
void outerFunction() {
// Declaration of innerFunction
int innerFunction(int x);
int result = innerFunction(5);
printf("Result: %d\n", result);
}
int innerFunction(int x) {
return x * x;
}
int main() {
outerFunction();
return 0;
}