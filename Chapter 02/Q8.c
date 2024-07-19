int divide(int a, int b, int *result) {
if (b == 0) {
return -1; // Error: Division by zero
}*result = a / b;
return 0; // Success
}