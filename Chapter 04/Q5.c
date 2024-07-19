#include <vector>
#include <string>
#include <iostream>
int main() {
std::vector<int> intVector = {1, 2, 3, 4, 5};
std::vector<std::string> strVector = {"apple", "banana", "cherry"};
for (const auto& num : intVector) {
std::cout << num << " ";
}
std::cout << std::endl;
for (const auto& str : strVector) {
std::cout << str << " ";
}
std::cout << std::endl;
return 0;
}