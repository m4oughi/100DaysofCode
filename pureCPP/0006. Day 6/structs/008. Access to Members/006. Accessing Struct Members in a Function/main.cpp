#include <iostream>

struct Point {
    int x;
    int y;
    
    int sum() const {
        return x + y; // Access within a member function
    }
};

int main() {
    Point p = {10, 20};
    int total = p.sum(); // Accessing members via a method
    std::cout << "Sum: " << total << std::endl;
}
