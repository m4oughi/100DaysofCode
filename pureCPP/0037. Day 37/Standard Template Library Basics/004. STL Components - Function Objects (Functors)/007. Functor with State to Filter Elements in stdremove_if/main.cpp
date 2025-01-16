#include <iostream>
#include <vector>
#include <algorithm>

class IsAboveThreshold {
    int threshold;

public:
    IsAboveThreshold(int th) : threshold(th) {}
    bool operator()(int value) const {
        return value > threshold;
    }
};

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    int threshold = 25;
    numbers.erase(std::remove_if(numbers.begin(), numbers.end(), IsAboveThreshold(threshold)), numbers.end());

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
