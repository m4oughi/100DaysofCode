#include <iostream>
using namespace std;

class Inventory {
public:
    static int totalProducts;  // Static data member

    static void addProduct() {
        totalProducts++;
    }
};

// Initialize static data member
int Inventory::totalProducts = 0;

int main() {
    // Create objects
    Inventory prod1, prod2;

    // Access static members via class, not objects
    Inventory::addProduct();
    Inventory::addProduct();

    // Display the result using the class name
    cout << "Total products: " << Inventory::totalProducts << endl;  // Output: 2

    return 0;
}
