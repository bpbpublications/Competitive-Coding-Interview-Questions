#include <iostream>
#include <thread>
void function1() {
// Code to be executed in the first thread
std::cout << "Function 1 is running in a separate thread." << std::endl;
}
void function2() {
// Code to be executed in the second thread
std::cout << "Function 2 is running in a separate thread." << std::endl;
}
int main() {
// Create two threads and associate them with the functions
std::thread t1(function1);
std::thread t2(function2);
// Wait for both threads to finish
t1.join();
t2.join();
std::cout << "Both threads have finished." << std::endl;
return 0;
}