// Incomplete type declaration
struct MyStruct;
// Function that uses a pointer to an incomplete type
void usePointer(struct MyStruct *ptr) {
// Code that uses the pointer
}
// Complete type definition
struct MyStruct {
int value;
};
int main() {
struct MyStruct instance;
instance.value = 42;
usePointer(&instance); // Pass a pointer to the instance
return 0;
}