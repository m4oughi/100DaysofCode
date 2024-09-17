#include <iostream>

int& getMax(int& a, int& b) {
    return (a > b) ? a : b;  // Returns reference to the larger of the two
}

int main() {
    int x = 10;
    int y = 20;
    int& max = getMax(x, y);
    std::cout << "Max value: " << max << std::endl;  // Displays the maximum value
    return 0;
}
