#include <iostream>
#include <thread>
void myFunction() {
std::cout << "This is a thread." << std::endl;
}
int main() {
// Create a new thread and associate it with myFunction
std::thread myThread(myFunction);
// Main thread continues executing here
std::cout << "This is the main thread." << std::endl;
// Wait for the thread to finish
myThread.join();
return 0;
}