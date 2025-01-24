#include <iostream>
#include <vector>
#include <numeric>
#include <string>

struct Item {
    std::string name;
    double price;
};

struct CumulativeItem {
    double cumulative_price;
    int item_count;
};

int main() {
    std::vector<Item> items = {
        {"Book", 12.99},
        {"Pen", 1.49},
        {"Notebook", 5.99},
        {"Pencil", 0.99}
    };
    std::vector<CumulativeItem> exclusive_result(items.size());

    std::exclusive_scan(items.begin(), items.end(), exclusive_result.begin(),
                       CumulativeItem{0.0, 0},
                       [&](const CumulativeItem& acc, const Item& current) -> CumulativeItem {
                           return CumulativeItem{
                               acc.cumulative_price + current.price,
                               acc.item_count + 1
                           };
                       });

    std::cout << "Exclusive Scan with Nested Aggregation:\n";
    for (const auto& ci : exclusive_result) {
        std::cout << "Cumulative Price: $" << ci.cumulative_price
                  << ", Item Count: " << ci.item_count << "\n";
    }
    /*
    Output:
    Cumulative Price: $0, Item Count: 0
    Cumulative Price: $12.99, Item Count: 1
    Cumulative Price: $14.48, Item Count: 2
    Cumulative Price: $20.47, Item Count: 3
    */

    return 0;
}
