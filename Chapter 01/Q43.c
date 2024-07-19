#define STRINGIFY(x) #x
int main() {
int num = 42;
printf("Value of num: %s\n", STRINGIFY(num));
return 0;
}