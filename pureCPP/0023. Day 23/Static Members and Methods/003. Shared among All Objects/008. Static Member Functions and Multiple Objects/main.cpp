#include <iostream>
using namespace std;

class Product {
private:
    static int totalSold;  // Shared static data member

public:
    static void sellProduct() {  // Static method
        totalSold++;
    }

    static void showTotalSold() {
        cout << "Total products sold: " << totalSold << endl;
    }
};

// Initialize static data member
int Product::totalSold = 0;

int main() {
    Product prod1, prod2;

    Product::sellProduct();  // Sell product via first object
    Product::sellProduct();  // Sell product via second object

    Product::showTotalSold();  // Output: Total products sold: 2
    return 0;
}
