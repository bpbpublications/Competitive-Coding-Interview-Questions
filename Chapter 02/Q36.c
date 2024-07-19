struct MyStruct {
int x;
int y;
};
void modifyStructByValue(struct MyStruct s) {
s.x = 100;
s.y = 200;
}
int main() {
struct MyStruct myInstance = {10, 20};
modifyStructByValue(myInstance);
printf("x: %d, y: %d\n", myInstance.x, myInstance.y); // Output: x: 10, y: 20
return 0;
}