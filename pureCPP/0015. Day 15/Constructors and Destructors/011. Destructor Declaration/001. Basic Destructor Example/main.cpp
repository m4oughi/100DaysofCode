#include <iostream>

class Basic {
public:
    Basic() {
        std::cout << "Constructor called." << std::endl;
    }
    
    ~Basic() {
        std::cout << "Destructor called." << std::endl;
    }
};

int main() {
    Basic obj;  // Constructor will be called here
    // Destructor will be called automatically at the end of the scope
    return 0;
}
