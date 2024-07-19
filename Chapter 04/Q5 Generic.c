#include <algorithm>
#include <vector>
#include <iostream>
int main() {
std::vector<int> numbers = {5, 2, 8, 1, 9};
// Sort the vector using a generic algorithm
std::sort(numbers.begin(), numbers.end());
for (const auto& num : numbers) {
std::cout << num << " ";
}
std::cout << std::endl;
return 0;
}