#include <iostream>
#include <stack>

class CustomStack {
private:
    std::stack<int> s;
public:
    void push(int x) { s.push(x); }
    void pop() { if (!s.empty()) s.pop(); }
    int getSize() { return s.size(); }
};

int main() {
    CustomStack cs;
    cs.push(5);
    cs.push(10);
    cs.push(15);

    std::cout << "Current stack size: " << cs.getSize() << std::endl;
    
    cs.pop();
    std::cout << "Size after one pop: " << cs.getSize() << std::endl;

    return 0;
}
