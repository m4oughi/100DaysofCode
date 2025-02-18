#include <iostream>
#include <stack>

int main() {
    std::stack<int> s1, s2;
    
    s1.push(1);
    s1.push(2);
    
    s2.push(10);
    s2.push(20);
    s2.push(30);

    if (s1.size() > s2.size()) {
        std::cout << "Stack 1 is larger." << std::endl;
    } else if (s1.size() < s2.size()) {
        std::cout << "Stack 2 is larger." << std::endl;
    } else {
        std::cout << "Both stacks are of equal size." << std::endl;
    }

    return 0;
}
