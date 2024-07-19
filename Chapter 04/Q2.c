#include <iostream>
#include <vector>
#include <algorithm>
int main() {
std::vector<int> numbers = {5, 2, 9, 1, 5};
// Sort the vector using std::sort from STL
std::sort(numbers.begin(), numbers.end());
// Print the sorted vector
for (int num : numbers) {
std::cout << num << " ";
}
return 0;
}