#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    
    s.push(100);
    s.push(200);
    s.push(300);

    std::cout << "Stack size after push operations: " << s.size() << std::endl; // 3

    return 0;
}
