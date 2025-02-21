#include <iostream>
#include <queue>
#include <unordered_map>

class IndexedQueue {
private:
    std::queue<int> q;
    std::unordered_map<int, int> indexMap;
    int index = 0;

public:
    void push(int value) {
        q.push(value);
        indexMap[index++] = value;
    }

    void pop() {
        if (!q.empty()) {
            indexMap.erase(index - q.size()); // Remove front element
            q.pop();
        }
    }

    int getElement(int i) {
        if (indexMap.find(i) != indexMap.end())
            return indexMap[i];
        throw std::out_of_range("Index out of bounds!");
    }
};

int main() {
    IndexedQueue iq;
    iq.push(100);
    iq.push(200);
    iq.push(300);

    std::cout << "Element at index 1: " << iq.getElement(1) << std::endl;

    return 0;
}
