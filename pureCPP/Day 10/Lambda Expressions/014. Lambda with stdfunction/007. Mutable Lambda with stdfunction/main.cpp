#include <iostream>
#include <functional>

int main() {
    int counter = 0;

    std::function<void()> incrementCounter = [counter]() mutable {
        counter++;
        std::cout << "Counter: " << counter << std::endl;
    };

    incrementCounter(); // Outputs: Counter: 1
    incrementCounter(); // Outputs: Counter: 2

    return 0;
}
