#include <iostream>

int main() {
    float numbers[] = {10.5f, 20.3f, 30.8f};

    for (auto num : numbers) { // `auto` automatically deduces `float`
        std::cout << num << " ";
    }

    return 0;
}
