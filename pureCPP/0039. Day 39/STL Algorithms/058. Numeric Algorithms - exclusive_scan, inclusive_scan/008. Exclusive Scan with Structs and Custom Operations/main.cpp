#include <iostream>
#include <vector>
#include <numeric>
#include <string>

struct Data {
    std::string name;
    int value;
};

struct CumulativeData {
    std::string name;
    int cumulative_value;
};

int main() {
    std::vector<Data> data = {{"A", 10}, {"B", 20}, {"C", 30}, {"D", 40}};
    std::vector<CumulativeData> cumulative(data.size());

    std::exclusive_scan(data.begin(), data.end(), cumulative.begin(), CumulativeData{"", 0},
                       [&](const CumulativeData& acc, const Data& current) -> CumulativeData {
                           return CumulativeData{current.name, acc.cumulative_value + current.value};
                       });

    std::cout << "Exclusive Scan with Structs:\n";
    for (const auto& cd : cumulative) {
        std::cout << "Name: " << cd.name << ", Cumulative Value: " << cd.cumulative_value << "\n";
    }
    /*
    Output:
    Name: A, Cumulative Value: 0
    Name: B, Cumulative Value: 10
    Name: C, Cumulative Value: 30
    Name: D, Cumulative Value: 60
    */

    return 0;
}
