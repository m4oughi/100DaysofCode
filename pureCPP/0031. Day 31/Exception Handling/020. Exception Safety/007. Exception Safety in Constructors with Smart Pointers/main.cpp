#include <iostream>
#include <memory>
#include <stdexcept>

class Widget {
public:
    Widget(int size) {
        if (size < 0) {
            throw std::runtime_error("Negative size not allowed!");
        }
        data = std::make_unique<int[]>(size);  // Memory managed by unique_ptr
    }

private:
    std::unique_ptr<int[]> data;
};

int main() {
    try {
        Widget w(-5);  // Throws exception, but no memory leak occurs
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
