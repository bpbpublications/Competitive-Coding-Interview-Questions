#include <stdio.h>
#define INIT_CODE() \
do { \
printf("This code runs at compile time.\n"); \
} while (0);
int main() {
INIT_CODE();
printf("Main function.\n");
return 0;
}