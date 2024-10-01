#include <iostream>

class Laptop {
private:
    std::string brand;
    int ram;
    int storage;
public:
    // Delegating constructor 1: Defaults to basic laptop
    Laptop() : Laptop("Generic", 4, 128) {
        std::cout << "Basic laptop created." << std::endl;
    }

    // Delegating constructor 2: Defaults to specified brand with standard specs
    Laptop(std::string b) : Laptop(b, 8, 256) {
        std::cout << b << " laptop created with standard specs." << std::endl;
    }
    
    // Primary constructor
    Laptop(std::string b, int r, int s) : brand(b), ram(r), storage(s) {
        std::cout << "Laptop brand: " << brand << ", RAM: " << ram << "GB, Storage: " << storage << "GB." << std::endl;
    }
    
    void display() const {
        std::cout << brand << " Laptop - RAM: " << ram << "GB, Storage: " << storage << "GB" << std::endl;
    }
};

int main() {
    Laptop l1;                // Calls first delegating constructor
    l1.display();

    Laptop l2("Dell");        // Calls second delegating constructor
    l2.display();

    Laptop l3("MacBook", 16, 512); // Calls primary constructor
    l3.display();

    return 0;
}
