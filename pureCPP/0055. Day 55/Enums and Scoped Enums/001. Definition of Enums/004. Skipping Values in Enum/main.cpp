#include <iostream>

enum PowerLevel { Low = 1, Medium = 5, High = 10 };

int main() {
    PowerLevel level = Medium;
    std::cout << "Power level: " << level << std::endl;
}
