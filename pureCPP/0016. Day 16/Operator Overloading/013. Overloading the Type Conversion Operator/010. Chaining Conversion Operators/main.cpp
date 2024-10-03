#include <iostream>
#include <string>
using namespace std;

class Product {
    string name;
    double price;
public:
    Product(string n, double p) : name(n), price(p) {}

    // Conversion operator to string (name of the product)
    operator string() const {
        return name;
    }

    // Conversion operator to double (price of the product)
    operator double() const {
        return price;
    }
};

int main() {
    Product prod("Laptop", 999.99);

    string prodName = prod;  // Implicit conversion to string
    double prodPrice = prod;  // Implicit conversion to double

    cout << "Product name: " << prodName << endl;  // Output: Laptop
    cout << "Product price: $" << prodPrice << endl;  // Output: $999.99

    return 0;
}
