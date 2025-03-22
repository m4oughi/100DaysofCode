#include <iostream>

class Demo {
public:
    void show([[maybe_unused]] int value) {
        // Does nothing but avoids compiler warning
    }
};

int main() {
    Demo d;
    d.show(10);
    return 0;
}
