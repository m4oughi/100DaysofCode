#include <iostream>

class Simple {
public:
    Simple() {
        std::cout << "Simple constructor called!" << std::endl;
    }
};

int main() {
    Simple obj;  // Constructor will be called
    return 0;
}
