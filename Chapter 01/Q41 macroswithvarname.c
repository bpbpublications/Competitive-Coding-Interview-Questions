#define PRINT_VAR(x) printf("Value of " #x " is %d\n", x)
int main() {
int a = 10;
int b = 20;
PRINT_VAR(a);
PRINT_VAR(b);
return 0;
}