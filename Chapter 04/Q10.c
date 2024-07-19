#include <algorithm>
#include <iostream>
#include <vector>
void myFunction(int value) {
std::cout << value << " ";
}
int main() {
std::vector<int> numbers = {1, 2, 3, 4, 5};
// Apply myFunction to each element in the vector
std::for_each(numbers.begin(),numbers.end(), myFunction);
return 0;
}