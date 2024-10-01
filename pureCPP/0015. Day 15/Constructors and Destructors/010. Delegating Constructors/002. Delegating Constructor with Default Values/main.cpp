#include <iostream>

class Car {
private:
    std::string model;
    int year;
public:
    // Delegating constructor with default values
    Car() : Car("Unknown", 2000) {
        std::cout << "Default constructor called." << std::endl;
    }

    // Delegating constructor with model only
    Car(std::string m) : Car(m, 2000) {
        std::cout << "Constructor with model only called." << std::endl;
    }
    
    // Primary constructor
    Car(std::string m, int y) : model(m), year(y) {
        std::cout << "Parameterized constructor called for " << model << ", year " << year << "." << std::endl;
    }
    
    void display() const {
        std::cout << "Car model: " << model << ", Year: " << year << std::endl;
    }
};

int main() {
    Car car1;               // Calls default constructor
    car1.display();

    Car car2("Toyota");      // Calls constructor with model only
    car2.display();

    Car car3("Honda", 2020); // Calls primary constructor
    car3.display();

    return 0;
}
