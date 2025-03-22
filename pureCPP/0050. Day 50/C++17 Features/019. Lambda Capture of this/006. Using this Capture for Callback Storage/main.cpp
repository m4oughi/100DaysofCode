#include <iostream>
#include <functional>

class Example {
public:
    int value = 77;
    std::function<void()> callback;

    void registerCallback() {
        callback = [*this]() {
            std::cout << "Callback Value: " << value << '\n';
        };
    }

    void executeCallback() {
        if (callback)
            callback();
    }
};

int main() {
    Example ex;
    ex.registerCallback();
    ex.executeCallback();
    return 0;
}
