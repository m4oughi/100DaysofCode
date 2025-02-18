#include <iostream>
#include <stack>

void clearStack(std::stack<int>& s) {
    while (s.size() > 0) {
        s.pop();
    }
}

int main() {
    std::stack<int> s;
    s.push(100);
    s.push(200);
    s.push(300);

    std::cout << "Stack size before clearing: " << s.size() << std::endl;
    clearStack(s);
    std::cout << "Stack size after clearing: " << s.size() << std::endl;

    return 0;
}
