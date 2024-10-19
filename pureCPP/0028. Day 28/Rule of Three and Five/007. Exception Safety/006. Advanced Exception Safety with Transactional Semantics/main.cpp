#include <iostream>
#include <stdexcept>

class TransactionalRAII {
    int* data;
public:
    TransactionalRAII(int value) : data(new int(value)) {
        std::cout << "Resource allocated!" << std::endl;
    }

    // Transactional operation
    void changeValue(int newValue) {
        int* temp = new int(newValue);  // Temporary allocation
        if (newValue < 0) {
            delete temp;
            throw std::runtime_error("Invalid value!");
        }
        delete data;  // Old resource is deallocated only after new resource is valid
        data = temp;
        std::cout << "Value changed!" << std::endl;
    }

    ~TransactionalRAII() {
        delete data;
        std::cout << "Resource deallocated!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    try {
        TransactionalRAII obj(800);
        obj.display();
        obj.changeValue(-100);  // Exception will be thrown here
        obj.display();
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // The operation is either completed fully or has no effect
    return 0;
}
