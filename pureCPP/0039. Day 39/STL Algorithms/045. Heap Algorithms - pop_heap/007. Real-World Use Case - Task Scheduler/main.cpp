#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> heap = {50, 40, 30, 20, 10};
    std::make_heap(heap.begin(), heap.end());

    int N = 3;
    std::cout << "Top " << N << " largest elements: ";
    for (int i = 0; i < N; ++i) {
        std::pop_heap(heap.begin(), heap.end());
        std::cout << heap.back() << " ";
        heap.pop_back(); // Remove the largest element
    }
    std::cout << "\n";

    return 0;
}
