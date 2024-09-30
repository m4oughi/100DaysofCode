#include <iostream>
using namespace std;

template <typename T>
struct StackStruct {
    T data[10];
    int top;

    StackStruct() : top(-1) {}

    void push(T value) {
        if (top < 9)
            data[++top] = value;
    }

    T pop() {
        if (top >= 0)
            return data[top--];
        return T();
    }
};

class StackClass {
private:
    int top;
    int data[10];
public:
    StackClass() : top(-1) {}

    void push(int value) {
        if (top < 9)
            data[++top] = value;
    }

    int pop() {
        if (top >= 0)
            return data[top--];
        return -1;
    }
};

int main() {
    StackStruct<int> ss;
    ss.push(5);
    ss.push(10);
    cout << "StackStruct Pop: " << ss.pop() << endl;

    StackClass sc;
    sc.push(15);
    sc.push(20);
    cout << "StackClass Pop: " << sc.pop() << endl;

    return 0;
}
