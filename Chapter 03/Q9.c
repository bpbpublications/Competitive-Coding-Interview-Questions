class Singleton {
public:
// Static member function to access the singleton instance
static Singleton& getInstance() {
// If the instance does not exist, create it
if (!instance) {
instance = new Singleton;
}
return *instance;
}
// Other public member functions
private:
// Private constructor to prevent direct instantiation
Singleton() {
// Initialization code, if needed
}
// Private destructor to prevent deletion of the instance
~Singleton() {
// Cleanup code, if needed
}
// Private copy constructor and assignment operator to prevent cloning
Singleton(const Singleton&) = delete;
Singleton& operator=(const Singleton&) = delete;
// Static instance of the Singleton class
static Singleton* instance;
};