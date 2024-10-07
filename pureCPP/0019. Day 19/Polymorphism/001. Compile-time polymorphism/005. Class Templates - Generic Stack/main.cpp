#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T arr[10];
    int top;
public:
    Stack() : top(-1) {}

    void push(T val) {
        if (top < 9) {
            arr[++top] = val;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    T pop() {
        if (top >= 0) {
            return arr[top--];
        } else {
            cout << "Stack underflow" << endl;
            return -1; // Error case
        }
    }
};

int main() {
    Stack<int> intStack;
    Stack<double> doubleStack;

    intStack.push(1);
    intStack.push(2);
    doubleStack.push(1.1);
    doubleStack.push(2.2);

    cout << "Popped from int stack: " << intStack.pop() << endl;
    cout << "Popped from double stack: " << doubleStack.pop() << endl;

    return 0;
}
