#include <iostream>
#include <atomic>
#include <stack>
#include <thread>
#include <vector>

class ThreadSafeStack {
private:
    std::stack<int> stk;
    std::mutex mtx;

public:
    void push(int value) {
        std::lock_guard<std::mutex> lock(mtx);
        stk.push(value);
    }

    bool pop(int &value) {
        std::lock_guard<std::mutex> lock(mtx);
        if (stk.empty()) return false;
        value = stk.top();
        stk.pop();
        return true;
    }
};

ThreadSafeStack tsStack;

void pushTask() {
    for (int i = 0; i < 5; ++i) {
        tsStack.push(i);
        std::cout << "Pushed: " << i << "\n";
    }
}

void popTask() {
    int value;
    while (tsStack.pop(value)) {
        std::cout << "Popped: " << value << "\n";
    }
}

int main() {
    std::thread t1(pushTask);
    std::thread t2(popTask);

    t1.join();
    t2.join();

    return 0;
}
