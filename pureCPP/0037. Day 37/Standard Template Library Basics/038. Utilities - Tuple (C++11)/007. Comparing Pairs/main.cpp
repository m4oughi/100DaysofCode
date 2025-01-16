#include <iostream>
#include <utility>

int main() {
    std::pair<int, int> p1(10, 20);
    std::pair<int, int> p2(15, 10);

    if (p1 < p2) {
        std::cout << "p1 is less than p2\n";
    } else {
        std::cout << "p1 is not less than p2\n";
    }

    return 0;
}
