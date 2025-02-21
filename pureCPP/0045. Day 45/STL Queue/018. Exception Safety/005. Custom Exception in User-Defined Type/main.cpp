#include <iostream>
#include <queue>
#include <stdexcept>

class Test {
public:
    int value;
    Test(int v) : value(v) {
        if (v < 0) {
            throw std::runtime_error("Negative value not allowed!");
        }
    }
};

int main() {
    std::queue<Test> q;

    try {
        q.push(Test(10));  // OK
        q.push(Test(-1));  // Will throw exception
    } catch (const std::runtime_error& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "Queue size: " << q.size() << std::endl;
    
    return 0;
}
