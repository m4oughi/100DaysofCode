#include <iostream>

class Laptop {
private:
    std::string brand;
    int memory;
public:
    Laptop(std::string b = "Unknown", int m = 8) {
        brand = b;
        memory = m;
        std::cout << "Laptop Brand: " << brand << ", Memory: " << memory << "GB" << std::endl;
    }
};

int main() {
    Laptop laptop1("Dell", 16);  // Full argument constructor call
    Laptop laptop2;              // Default argument constructor call
    return 0;
}
