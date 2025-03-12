#include <iostream>
#include <functional>

void executeCallback(const std::function<void(int)>& callback, int value) {
    callback(value);
}

int main() {
    executeCallback([](int x) {
        std::cout << "Callback received value: " << x << std::endl;
    }, 42);

    return 0;
}
