#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> scores = {50, 75, 60, 85, 40, 90};
    std::vector<int> cumulative_high_scores(scores.size());

    std::inclusive_scan(scores.begin(), scores.end(), cumulative_high_scores.begin(), 
        [&](int acc, int score) -> int {
            return acc + (score >= 70 ? score : 0);
        });

    std::cout << "Inclusive Scan with High Scores (>=70): ";
    for (int total : cumulative_high_scores) {
        std::cout << total << " ";
    }
    // Output: 50 125 125 210 210 300

    return 0;
}
