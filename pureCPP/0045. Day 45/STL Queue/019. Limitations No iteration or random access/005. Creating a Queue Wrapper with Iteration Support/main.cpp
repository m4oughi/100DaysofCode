#include <iostream>
#include <queue>
#include <vector>

class IterableQueue {
private:
    std::queue<int> q;
public:
    void push(int value) {
        q.push(value);
    }

    void pop() {
        if (!q.empty()) q.pop();
    }

    bool empty() const {
        return q.empty();
    }

    std::vector<int> getElements() {
        std::vector<int> elements;
        std::queue<int> temp = q; // Copy queue

        while (!temp.empty()) {
            elements.push_back(temp.front());
            temp.pop();
        }
        return elements;
    }
};

int main() {
    IterableQueue iq;
    iq.push(7);
    iq.push(14);
    iq.push(21);

    std::vector<int> elements = iq.getElements();
    std::cout << "Iterating over queue elements: ";
    for (int num : elements) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
