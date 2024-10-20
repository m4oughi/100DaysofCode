#include <iostream>

namespace Operations {
    void process(int a) {
        std::cout << "Processing integer: " << a << std::endl;
    }

    void process(double a) {
        std::cout << "Processing double: " << a << std::endl;
    }
}

class Processor {
public:
    void execute(int value) {
        Operations::process(value); // Calls the integer version
    }

    void execute(double value) {
        Operations::process(value); // Calls the double version
    }
};

int main() {
    Processor proc;
    proc.execute(10);     // Processing integer
    proc.execute(15.5);   // Processing double
    return 0;
}
