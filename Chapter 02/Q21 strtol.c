#include <stdio.h>
#include <stdlib.h>
int main() {
char str[] = "12345";
char *endptr;
long value = strtol(str, &endptr, 10);
if (*endptr != '\0') {
printf("Conversion failed. Invalid characters found: %s\n", endptr);
} else {
printf("Converted value: %ld\n", value);
}
return 0;
}