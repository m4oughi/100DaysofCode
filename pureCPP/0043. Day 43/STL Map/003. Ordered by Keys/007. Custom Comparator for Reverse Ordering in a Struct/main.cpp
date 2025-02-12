#include <iostream>
#include <map>

struct DescendingOrder {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
    std::map<int, std::string, DescendingOrder> ranking;

    ranking[3] = "Bronze";
    ranking[1] = "Gold";
    ranking[2] = "Silver";

    std::cout << "Ranking in descending order:\n";
    for (const auto& entry : ranking) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
