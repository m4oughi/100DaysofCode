#include <iostream>
#include <thread>

int main() {
    int x = 5;
    std::string name = "Lambda";

    std::thread t([x, name]() {
        std::cout << "Lambda thread - Value: " << x << ", Name: " << name << std::endl;
    });

    t.join();
    return 0;
}
