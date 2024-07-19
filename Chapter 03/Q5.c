#include <iostream>
#include <fstream>
class FileHandler {
public:
FileHandler(const std::string& filename) : file(filename) {
if (!file.is_open()) {
throw std::runtime_error("Failed to open file");
}
}
// Destructor automatically closes the file.
~FileHandler() {
if (file.is_open()) {
file.close();
}
}
// Other methods for reading/writing to the file can be added here.
private:
std::ifstream file;
};
int main() {
try {
FileHandler file("example.txt");
// Use the file object for reading/writing.
// The file will be automatically closed when 'file' goes out of scope.
}
catch (const std::exception& e) {
std::cerr << "Error: " << e.what() << std::endl;
}
// At this point, the file has been closed automatically.
return 0;
}