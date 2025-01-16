#include <iostream>
#include <vector>
#include <numeric>

class SumSquares {
public:
    int operator()(int total, int num) const {
        return total + num * num;
    }
};

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};
    int result = std::accumulate(numbers.begin(), numbers.end(), 0, SumSquares());

    std::cout << "Sum of squares: " << result << std::endl;
    return 0;
}
