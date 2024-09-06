#include <iostream>
#include <string>

class Greeter {
public:
    void greet(const std::string& name) const {
        std::cout << "Hello, " << name << "!" << std::endl;
    }
};

int main() {
    Greeter greeter;
    greeter.greet("Alice");  // Temporary std::string

    return 0;
}
