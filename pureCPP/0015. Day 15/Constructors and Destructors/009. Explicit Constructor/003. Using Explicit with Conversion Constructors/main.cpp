#include <iostream>

class Temperature {
private:
    double celsius;
public:
    // Explicit constructor to prevent implicit conversion from Fahrenheit to Celsius
    explicit Temperature(double f) : celsius((f - 32) * 5 / 9) {
        std::cout << "Temperature set to " << celsius << " degrees Celsius." << std::endl;
    }
    
    void display() const {
        std::cout << celsius << " degrees Celsius" << std::endl;
    }
};

int main() {
    Temperature t1(98.6);  // Explicitly calls the constructor
    t1.display();
    
    // Temperature t2 = 212.0;  // Error: Implicit conversion is not allowed due to explicit constructor
    return 0;
}
