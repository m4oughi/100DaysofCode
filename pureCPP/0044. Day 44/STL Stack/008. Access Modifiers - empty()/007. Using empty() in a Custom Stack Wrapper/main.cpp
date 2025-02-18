#include <iostream>
#include <stack>

class CustomStack {
private:
    std::stack<int> s;
public:
    void push(int x) {
        s.push(x);
    }

    void pop() {
        if (!s.empty()) {
            s.pop();
        }
    }

    bool isEmpty() {
        return s.empty();
    }
};

int main() {
    CustomStack cs;
    cs.push(100);
    cs.push(200);

    std::cout << "Is stack empty? " << (cs.isEmpty() ? "Yes" : "No") << std::endl;

    cs.pop();
    cs.pop();
    
    std::cout << "After popping all elements, is stack empty? " << (cs.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
