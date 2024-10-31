#include <iostream>
#include <stdexcept>

void openFile() {
    throw std::runtime_error("Unable to open file");
}

int main() {
    try {
        openFile();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
