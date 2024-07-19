#include <stdio.h>
void print(int num) {
printf("Integer: %d\n", num);
}
void print(float num) {
printf("Float: %f\n", num);
}
int main() {
print(10); // Compiler error due to ambiguous function call
print(3.14); // Compiler error due to ambiguous function call
return 0;
}