#include <iostream>
#include <vector>
#include <numeric>

struct Accumulator {
    int sum_even;
    int sum_odd;
};

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};
    std::vector<Accumulator> inclusive_result(numbers.size());

    std::inclusive_scan(numbers.begin(), numbers.end(), inclusive_result.begin(),
        [&](const Accumulator& acc, int val) -> Accumulator {
            Accumulator new_acc = acc;
            if (val % 2 == 0) {
                new_acc.sum_even += val;
            } else {
                new_acc.sum_odd += val;
            }
            return new_acc;
        },
        Accumulator{0, 0}
    );

    std::cout << "Inclusive Scan with Complex Conditional Logic:\n";
    for (const auto& acc : inclusive_result) {
        std::cout << "Sum Even: " << acc.sum_even << ", Sum Odd: " << acc.sum_odd << "\n";
    }
    /*
    Output:
    Sum Even: 0, Sum Odd: 1
    Sum Even: 2, Sum Odd: 1
    Sum Even: 2, Sum Odd: 4
    Sum Even: 6, Sum Odd: 4
    Sum Even: 6, Sum Odd: 9
    Sum Even: 12, Sum Odd: 9
    */

    return 0;
}
