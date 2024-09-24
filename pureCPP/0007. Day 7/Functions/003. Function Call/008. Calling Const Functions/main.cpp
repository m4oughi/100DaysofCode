#include <iostream>

class Example {
public:
    void show() const;  // Function declaration
};

int main() {
    Example obj;
    obj.show();  // Call to const function
    return 0;
}

// Const function definition
void Example::show() const {
    std::cout << "This is a const function." << std::endl;
}
