int operate(int a, int b, int (*func)(int, int)) {
return func(a, b);
}
int main() {
int result = operate(5, 3, add); // Uses the 'add' function through the function pointer
result = operate(8, 4, subtract); // Uses the 'subtract' function through the function pointer
return 0;
}