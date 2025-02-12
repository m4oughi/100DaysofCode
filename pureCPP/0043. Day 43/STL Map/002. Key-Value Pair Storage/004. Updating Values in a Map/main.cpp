#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> products = {
        {1, "Laptop"},
        {2, "Phone"},
        {3, "Tablet"}
    };

    std::cout << "Before update: " << products[2] << "\n";

    products[2] = "Smartphone"; // Updating value for key 2

    std::cout << "After update: " << products[2] << "\n";

    return 0;
}
