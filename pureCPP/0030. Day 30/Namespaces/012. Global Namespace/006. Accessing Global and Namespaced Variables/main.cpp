#include <iostream>

int value = 50;  // Global variable

namespace Data {
    int value = 100;  // Variable inside the Data namespace
}

int main() {
    std::cout << "Global value: " << ::value << std::endl;
    std::cout << "Data namespace value: " << Data::value << std::endl;
    return 0;
}
