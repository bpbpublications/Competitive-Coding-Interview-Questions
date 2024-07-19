#include <stdio.h>
void my_init_function(void) {
printf("This function runs before main.\n");
}
static int init_var = (my_init_function(), 0);
int main() {
printf("Main function.\n");
return 0;
}