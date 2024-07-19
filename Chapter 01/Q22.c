#include <stdio.h>
int globalVariable = 42; // global variable
void myFunction() {
int localVariable = 1; // local variable
printf("Inside myFunction():\n");
printf("globalVariable = %d\n", globalVariable);
printf("localVariable = %d\n", localVariable);
}
int main() {
int mainVariable = 2; // local variable
printf("Inside main():\n");
printf("globalVariable = %d\n", globalVariable);
printf("mainVariable = %d\n", mainVariable);
myFunction(); // call function
return 0;
}