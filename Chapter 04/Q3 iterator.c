#include <vector>
#include <iostream>
int main() {
std::vector<int> numbers = {1, 2, 3, 4, 5};
// Use iterators to traverse the vector
for (auto it = numbers.begin(); it != numbers.end(); ++it) {
std::cout << *it << " ";
}
std::cout << std::endl;
return 0;
}