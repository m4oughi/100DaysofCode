#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> products = {
        {101, "Laptop"},
        {102, "Phone"},
        {103, "Tablet"}
    };

    int key = 102;
    if (products.count(key)) {
        std::cout << "Product ID " << key << " exists.\n";
    } else {
        std::cout << "Product ID " << key << " not found.\n";
    }

    return 0;
}
