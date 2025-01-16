#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>

void frequencySort(const std::vector<int>& vec) {
    std::unordered_map<int, int> freqMap;

    // Count frequencies
    for (int num : vec) {
        freqMap[num]++;
    }

    // Priority queue for sorting by frequency
    std::priority_queue<std::pair<int, int>> pq;
    for (auto& [num, freq] : freqMap) {
        pq.push({freq, num});
    }

    std::cout << "Elements sorted by frequency: ";
    while (!pq.empty()) {
        int freq = pq.top().first;
        int num = pq.top().second;
        for (int i = 0; i < freq; ++i) {
            std::cout << num << " ";
        }
        pq.pop();
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> vec = {4, 4, 2, 3, 3, 3, 1};
    frequencySort(vec);

    return 0;
}
