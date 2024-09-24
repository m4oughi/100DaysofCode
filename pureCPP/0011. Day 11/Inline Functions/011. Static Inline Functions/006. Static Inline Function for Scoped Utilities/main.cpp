#include <iostream>

class Utilities {
private:
    // Static inline function as a private member
    static inline int square(int x) {
        return x * x;
    }
public:
    static void printSquare(int x) {
        std::cout << "Square of " << x << " is: " << square(x) << std::endl;
    }
};

int main() {
    Utilities::printSquare(6); // Output: Square of 6 is: 36
    return 0;
}
