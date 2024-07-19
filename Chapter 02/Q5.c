#include <stdio.h>
void my_init_function(void) __attribute__((constructor));
void my_init_function(void) {
printf("This function runs before main.\n");
}
int main() {
printf("Main function.\n");
return 0;
}