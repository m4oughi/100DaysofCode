#include <iostream>
#include <future>

class Example {
public:
    int value = 10;

    void asyncOperation() {
        auto future = std::async(std::launch::async, [*this]() {
            std::cout << "Async Value: " << value << '\n';
        });
        future.wait();
    }
};

int main() {
    Example ex;
    ex.asyncOperation();
    return 0;
}
