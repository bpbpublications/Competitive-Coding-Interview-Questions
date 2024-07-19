class RuleOfThreeExample {
public:
// Constructor allocates dynamic memory
RuleOfThreeExample(size_t size) : data(new int[size]), size(size) {}
// Destructor releases the allocated memory
~RuleOfThreeExample() {
delete[] data;
}
// Copy constructor makes a deep copy of the data
RuleOfThreeExample(const RuleOfThreeExample& other) : size(other.size) {
data = new int[size];
std::copy(other.data, other.data + size, data);
}
// Copy assignment operator for proper resource management
RuleOfThreeExample& operator=(const RuleOfThreeExample& other) {
if (this != &other) { // Self-assignment check
delete[] data;
size = other.size;
data = new int[size];
std::copy(other.data, other.data + size, data);
}
return *this;
}
private:
int* data;
size_t size;
};