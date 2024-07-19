#include <iostream>
int main() {
// Basic lambda function syntax
auto sum = [](int a, int b) { return a + b; };
// Calling the lambda function
std::cout << "Sum: " << sum(3, 4) << std::endl;
// Lambda function with capture clause
int x = 10;
auto add_x = [x](int y) { return x + y; };
// Calling the lambda function with capture
std::cout << "Result: " << add_x(5) << std::endl;
return 0;
}