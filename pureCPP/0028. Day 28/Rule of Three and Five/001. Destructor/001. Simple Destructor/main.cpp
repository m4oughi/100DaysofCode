#include <iostream>

class Simple {
public:
    Simple() {
        std::cout << "Constructor called!" << std::endl;
    }
    ~Simple() {
        std::cout << "Destructor called!" << std::endl;
    }
};

int main() {
    Simple obj;  // Constructor will be called here
    // Destructor will be called when obj goes out of scope
    return 0;
}
