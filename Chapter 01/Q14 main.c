#include <stdio.h>
#include "MathFunctions.h"
int main()
{
int result = add(5, 3);
printf("Result of addition: %d\n", result);
result = subtract(10, 4);
printf("Result of subtraction: %d\n", result);
return 0;
}