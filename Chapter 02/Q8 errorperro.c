#include <stdio.h>
#include <errno.h>
int main() {
FILE *file = fopen("nonexistent.txt", "r");
if (file == NULL) {
perror("Error");
return 1;
}
// Rest of the code
fclose(file);
return 0;
}