#include <iostream>

class Distance {
private:
    int meters;
public:
    // Explicit constructor prevents implicit conversion from int to Distance
    explicit Distance(int m) : meters(m) {
        std::cout << "Distance object created with " << meters << " meters." << std::endl;
    }
    
    void display() const {
        std::cout << meters << " meters" << std::endl;
    }
};

int main() {
    Distance d1(10);  // Allowed
    d1.display();
    
    // Distance d2 = 20;  // Error: Cannot implicitly convert int to Distance
    return 0;
}
