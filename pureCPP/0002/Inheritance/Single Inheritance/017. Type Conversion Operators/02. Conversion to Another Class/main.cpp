#include <iostream>
using namespace std;

// Forward declaration of Target class
class Target;

// Base class
class Source {
private:
    int value;
public:
    Source(int val) : value(val) {}

    // Type conversion operator to convert Source to Target
    operator Target() const;

    int getValue() const { return value; }
};

// Target class
class Target {
private:
    int value;
public:
    Target(int val) : value(val) {}

    void display() const {
        cout << "Target value: " << value << endl;
    }
};

// Conversion operator implementation
Source::operator Target() const {
    return Target(value);
}

int main() {
    Source src(20);
    Target tgt = src; // Implicit conversion from Source to Target
    tgt.display();

    return 0;
}
