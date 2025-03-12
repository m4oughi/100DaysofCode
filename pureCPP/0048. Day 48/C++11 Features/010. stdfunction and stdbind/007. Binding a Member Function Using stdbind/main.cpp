#include <iostream>
#include <functional>

class Printer {
public:
    void printMessage(const std::string& message) {
        std::cout << "Message: " << message << std::endl;
    }
};

int main() {
    Printer printer;
    auto boundFunction = std::bind(&Printer::printMessage, &printer, std::placeholders::_1);

    boundFunction("Hello from std::bind!");

    return 0;
}
