#include <iostream>
#include <thread>

class Example {
public:
    int value = 0;

    void startThread() {
        auto lambda = [*this]() {
            std::cout << "Thread Value: " << value << '\n';
        };
        std::thread t(lambda);
        t.join();
    }
};

int main() {
    Example ex;
    ex.value = 50;
    ex.startThread();
    return 0;
}
