#include <stdio.h>
int main() {
int num = 42;
double pi = 3.14159;
printf("Size of num: %zu bytes\n", sizeof(num));
printf("Size of pi: %zu bytes\n", sizeof(pi));
return 0;
}