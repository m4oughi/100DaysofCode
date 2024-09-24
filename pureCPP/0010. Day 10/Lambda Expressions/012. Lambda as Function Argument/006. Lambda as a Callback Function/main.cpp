#include <iostream>
#include <functional>

void performTask(const std::function<void(int)>& callback) {
    for (int i = 1; i <= 5; ++i) {
        callback(i); // Invoke the callback with each value
    }
}

int main() {
    performTask([](int x) {
        std::cout << "Processing number: " << x << std::endl;
    });
    return 0;
}
