#include <iostream>
#include <deque>

int main() {
    std::deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);

    std::cout << "Front: " << d.front() << ", Back: " << d.back() << "\n";
    d.pop_front();
    d.pop_back();

    for (int val : d) {
        std::cout << val << " ";
    }
    return 0;
}
