#include <iostream>

class Example {
public:
    Example() = default; // Explicitly defaulted constructor

    void show() {
        std::cout << "Default constructor is used!" << std::endl;
    }
};

int main() {
    Example ex; // Uses default constructor
    ex.show();
    return 0;
}
