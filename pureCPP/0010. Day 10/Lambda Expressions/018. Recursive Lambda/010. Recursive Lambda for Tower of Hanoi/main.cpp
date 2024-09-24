#include <iostream>
#include <functional>

int main() {
    std::function<void(int, char, char, char)> towerOfHanoi = [&](int n, char from, char to, char aux) {
        if (n == 1) {
            std::cout << "Move disk 1 from " << from << " to " << to << std::endl;
            return;
        }
        towerOfHanoi(n - 1, from, aux, to);
        std::cout << "Move disk " << n << " from " << from << " to " << to << std::endl;
        towerOfHanoi(n - 1, aux, to, from);
    };

    int n = 3; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B, and C are names of rods
    return 0;
}
