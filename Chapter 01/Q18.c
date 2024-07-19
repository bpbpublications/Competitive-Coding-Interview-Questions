#include <stdio.h>
int main() {
int i = 10;
#pragma message("Compiling main function...")
#pragma omp parallel
{
printf("Hello from thread %d\n", omp_get_thread_num());
}
return 0;
}