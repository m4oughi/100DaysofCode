#include <iostream>
#include <thread>

class MyClass {
public:
    int value = 10;

    void updateValue() {
        std::thread t([this]() {
            value += 10;
            std::cout << "Updated value in thread: " << value << std::endl;
        });
        t.join();
    }
};

int main() {
    MyClass obj;
    obj.updateValue(); // Outputs: Updated value in thread: 20
    return 0;
}
