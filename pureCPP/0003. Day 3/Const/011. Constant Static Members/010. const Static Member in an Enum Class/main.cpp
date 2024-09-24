#include <iostream>

class MyClass {
public:
    enum class Status { OK, Error, Unknown };

    static const Status defaultStatus = Status::Unknown; // Constant static enum member

    void printStatus() const {
        switch (defaultStatus) {
            case Status::OK:
                std::cout << "Status: OK" << std::endl;
                break;
            case Status::Error:
                std::cout << "Status: Error" << std::endl;
                break;
            case Status::Unknown:
                std::cout << "Status: Unknown" << std::endl;
                break;
        }
    }
};

int main() {
    MyClass obj;
    obj.printStatus(); // Prints "Status: Unknown"
}
