#include <iostream>
#include <forward_list>
#include <functional>

template <typename ForwardIterator, typename Function>
void applyFunction(ForwardIterator begin, ForwardIterator end, Function func) {
    for (auto it = begin; it != end; ++it) {
        *it = func(*it);
    }
}

int main() {
    std::forward_list<int> numbers = {1, 2, 3, 4, 5};

    applyFunction(numbers.begin(), numbers.end(), [](int n) { return n * n; });

    std::cout << "Squared forward list: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    std::cout << "\n";

    return 0;
}
