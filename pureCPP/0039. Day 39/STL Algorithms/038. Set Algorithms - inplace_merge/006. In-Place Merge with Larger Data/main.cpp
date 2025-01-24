#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> data(20);
    for (int i = 0; i < 10; ++i) data[i] = i * 2;          // First sorted range: 0, 2, 4, ..., 18
    for (int i = 10; i < 20; ++i) data[i] = (i - 10) * 2 + 1; // Second sorted range: 1, 3, 5, ..., 19

    std::inplace_merge(data.begin(), data.begin() + 10, data.end());

    std::cout << "Merged data: ";
    for (int num : data) {
        std::cout << num << " ";
    }

    return 0;
}
