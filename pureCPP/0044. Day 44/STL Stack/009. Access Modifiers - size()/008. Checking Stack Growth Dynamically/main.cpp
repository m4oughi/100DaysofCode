#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    for (int i = 1; i <= 5; ++i) {
        s.push(i);
        std::cout << "Pushed " << i << ", Stack size: " << s.size() << std::endl;
    }

    return 0;
}
