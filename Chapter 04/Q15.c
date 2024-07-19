#include <iostream>
#include <algorithm>
#include <random>
#include <vector>
int main() {
std::vector<int> myVector = {1, 2, 3, 4, 5};
std::random_device rd;
std::mt19937 gen(rd());
std::shuffle(myVector.begin(), myVector.end(), gen);
for (int value : myVector) {
std::cout << value << " ";
}
return 0;
}