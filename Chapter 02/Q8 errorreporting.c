int divide(int a, int b, int *result, int *errorCode) {
if (b == 0) {
*errorCode = -1; // Error: Division by zero
return 0;
}
*result = a / b;
*errorCode = 0; // Success
return 1;
}