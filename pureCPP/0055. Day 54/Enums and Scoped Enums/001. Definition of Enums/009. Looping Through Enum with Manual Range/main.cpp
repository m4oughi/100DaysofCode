#include <iostream>

enum Season { Spring = 0, Summer = 1, Fall = 2, Winter = 3 };

int main() {
    for (int i = Spring; i <= Winter; ++i) {
        std::cout << "Season value: " << i << std::endl;
    }
}
