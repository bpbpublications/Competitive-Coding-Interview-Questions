#include <iostream>
#include <memory>
int main() {
// Creating a shared_ptr
std::shared_ptr<int> shared = std::make_shared<int>(42);
// Creating another shared_ptr that shares ownership
std::shared_ptr<int> another = shared;
// Accessing the value through any shared_ptr
std::cout << *shared << std::endl;
std::cout << *another << std::endl;
// shared and another share ownership, so the object is deleted only once
return 0; // Object is automatically deleted when the last shared_ptr goes out of scope
}