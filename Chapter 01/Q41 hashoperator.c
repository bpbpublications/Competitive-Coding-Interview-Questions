#define DEBUG_PRINT(x) printf(#x " = %d\n", x)
int main() {
int num = 42;
DEBUG_PRINT(num);
return 0;
}