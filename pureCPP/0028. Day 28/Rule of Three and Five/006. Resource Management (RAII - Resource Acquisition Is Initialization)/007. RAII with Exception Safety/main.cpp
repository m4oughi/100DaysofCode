#include <iostream>
#include <stdexcept>

class ExceptionSafeRAII {
    int* data;
public:
    ExceptionSafeRAII(int value) {
        data = new int(value);
        std::cout << "Memory allocated!" << std::endl;
    }

    ~ExceptionSafeRAII() {
        delete data;
        std::cout << "Memory deallocated!" << std::endl;
    }

    void riskyOperation() {
        std::cout << "Performing risky operation!" << std::endl;
        throw std::runtime_error("An error occurred!");
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    try {
        ExceptionSafeRAII obj(500);
        obj.display();
        obj.riskyOperation();  // Throws an exception
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // Memory is still properly released despite the exception
    return 0;
}
