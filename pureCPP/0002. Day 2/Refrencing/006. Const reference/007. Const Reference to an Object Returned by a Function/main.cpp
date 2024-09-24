#include <iostream>

int createTemp() {
    return 100;
}

int main() {
    const int &ref = createTemp();  // Binds to the temporary returned by createTemp
    std::cout << ref << std::endl;  // Output: 100

    return 0;
}