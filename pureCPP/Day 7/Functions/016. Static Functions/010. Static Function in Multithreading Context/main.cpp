#include <iostream>
#include <thread>

class Counter {
private:
    static int count;

public:
    static void increment() {
        for (int i = 0; i < 100000; ++i) {
            count++;
        }
    }

    static int getCount() {
        return count;
    }
};

int Counter::count = 0;

int main() {
    std::thread t1(Counter::increment);
    std::thread t2(Counter::increment);

    t1.join();
    t2.join();

    std::cout << "Final Count: " << Counter::getCount() << std::endl;

    return 0;
}
