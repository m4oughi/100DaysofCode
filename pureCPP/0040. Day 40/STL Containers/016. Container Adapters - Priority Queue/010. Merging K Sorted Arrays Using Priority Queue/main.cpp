#include <iostream>
#include <queue>
#include <vector>

struct Node {
    int value, arrayIndex, elementIndex;
    
    bool operator>(const Node& other) const {
        return value > other.value;
    }
};

std::vector<int> mergeSortedArrays(std::vector<std::vector<int>>& arrays) {
    std::priority_queue<Node, std::vector<Node>, std::greater<Node>> pq;
    std::vector<int> result;

    for (int i = 0; i < arrays.size(); i++) {
        if (!arrays[i].empty()) {
            pq.push({arrays[i][0], i, 0});
        }
    }

    while (!pq.empty()) {
        Node current = pq.top();
        pq.pop();

        result.push_back(current.value);

        if (current.elementIndex + 1 < arrays[current.arrayIndex].size()) {
            pq.push({arrays[current.arrayIndex][current.elementIndex + 1], current.arrayIndex, current.elementIndex + 1});
        }
    }

    return result;
}

int main() {
    std::vector<std::vector<int>> arrays = {{2, 6, 12}, {1, 9}, {23, 34, 90}};
    std::vector<int> mergedArray = mergeSortedArrays(arrays);

    for (int num : mergedArray) {
        std::cout << num << " ";
    }
    return 0;
}
