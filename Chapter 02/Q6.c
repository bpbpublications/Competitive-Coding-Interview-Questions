int add(int a, int b) {
return a + b;
}
int subtract(int a, int b) {
return a - b;
}
int main() {
int (*operation)(int, int); // Declare a function pointer
operation = add; // Initialize it to point to the 'add' function
int result = operation(5, 3); // Call the function through the pointer
return 0;
}