#include <iostream>
#include <list>
int main() {
std::list<std::string> names = {"Alice", "Bob", "Charlie"};
// Using the same iterator-based loop for a different container type
for (const auto &name : names) {
std::cout << name << std::endl;
}
return 0;
}