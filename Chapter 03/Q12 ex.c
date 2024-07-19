#include <iostream>
#include <vector>
#include <algorithm>
int main() {
std::vector<int> numbers = {1, 2, 3, 4, 5};
// Using a lambda expression with std::for_each
std::for_each(numbers.begin(), numbers.end(), [](int n) {
std::cout << n << " ";
});
return 0;
}