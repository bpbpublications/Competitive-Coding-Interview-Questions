int main() {
int (*operation)(int, int);
operation = add;
int result = operation(5, 3); // Calls the 'add'function through the pointer
operation = subtract;
result = operation(8, 4); // Calls the 'subtract' function through the pointer
return 0;
}