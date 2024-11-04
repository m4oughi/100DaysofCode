// File1.cpp (simulated)
#include <iostream>
#include <exception>

class ModuleException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Exception from another module!";
    }
};

void moduleFunction() {
    throw ModuleException();
}

// File2.cpp (simulated)
extern void moduleFunction();  // Declaration of external function

int main() {
    try {
        moduleFunction();
    } catch (const ModuleException& e) {
        std::cout << "Caught in main from module: " << e.what() << std::endl;
    }
    return 0;
}
