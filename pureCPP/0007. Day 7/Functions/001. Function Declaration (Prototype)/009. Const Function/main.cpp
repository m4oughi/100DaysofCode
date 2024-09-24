#include <iostream>

// Class with const function declaration
class Example {
public:
    void show() const;  // Function declaration (prototype) as const
};

// Function definition
void Example::show() const {
    std::cout << "This is a const function." << std::endl;
}

int main() {
    Example ex;
    ex.show();  // Calling const function
    return 0;
}
