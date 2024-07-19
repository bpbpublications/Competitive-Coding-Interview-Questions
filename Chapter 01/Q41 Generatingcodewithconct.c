#define CONCAT(x, y) x ## y
int main() {
int xy = 42;
printf("%d\n", CONCAT(x, y));
return 0;
}