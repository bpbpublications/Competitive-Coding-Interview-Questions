#include <stdio.h>
int lastErrorCode = 0;
void setError(int errorCode) {
lastErrorCode = errorCode;
}
void printError() {
if (lastErrorCode == 1) {
printf("Error: Division by zero\n");
}
// More error cases can be handled similarly
}
int divide(int a, int b) {
if (b == 0) {
setError(1); // Set error code
return 0; // Return a default value
}
return a / b;
}