#include <iostream>

class CallCounter {
    int count;

public:
    CallCounter() : count(0) {}
    void operator()() {
        ++count;
        std::cout << "Function called " << count << " times.\n";
    }
};

int main() {
    CallCounter counter;
    counter();
    counter();
    counter();
    return 0;
}
