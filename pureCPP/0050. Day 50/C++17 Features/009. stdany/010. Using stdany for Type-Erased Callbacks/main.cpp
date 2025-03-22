#include <iostream>
#include <any>
#include <functional>

void executeCallback(const std::any& callback) {
    if (callback.type() == typeid(std::function<void()>)) {
        std::any_cast<std::function<void()>>(callback)();
    } else {
        std::cout << "Invalid callback\n";
    }
}

int main() {
    executeCallback(std::function<void()>{[] { std::cout << "Callback executed!\n"; }});

    return 0;
}
