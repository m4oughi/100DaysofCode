#include <iostream>

namespace DataStructures {
    template<typename T>
    class Stack {
    public:
        Stack() : top(-1) {}

        void push(T value) {
            if (top < 99) {
                elements[++top] = value;
            }
        }

        T pop() {
            if (top >= 0) {
                return elements[top--];
            }
            return T();  // Return default value if empty
        }

    private:
        T elements[100];
        int top;
    };
}

int main() {
    DataStructures::Stack<int> stack;
    stack.push(10);
    stack.push(20);
    std::cout << "Popped: " << stack.pop() << std::endl;

    return 0;
}
