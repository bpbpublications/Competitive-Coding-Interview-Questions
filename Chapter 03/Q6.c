class Shape {
public:
virtual void draw() {
// Base class implementation (can be overridden by derived classes)
}
};
class Circle : public Shape {
public:
void draw() override {
// Specific implementation for Circle
}
};
class Square : public Shape {
public:
void draw() override {
// Specific implementation for Square
}
};