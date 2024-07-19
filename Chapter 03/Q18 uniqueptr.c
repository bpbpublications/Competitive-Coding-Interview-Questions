#include <iostream>
#include <memory>
int main() {
// Creating a unique_ptr
std::unique_ptr<int> unique = std::make_unique<int>(42);
// Attempting to create another unique_ptr (error, ownership cannot be shared)
// std::unique_ptr<int> another = unique; // This line won't compile
// Accessing the value through the unique_ptr
std::cout << *unique << std::endl;
// unique goes out of scope, and the object is automatically deleted
return 0;
}