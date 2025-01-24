#include <iostream>
#include <vector>
#include <numeric>
#include <string>

struct Sale {
    std::string salesperson;
    double amount;
};

struct CumulativeSale {
    std::string last_salesperson;
    double cumulative_amount;
};

int main() {
    std::vector<Sale> sales = {
        {"Alice", 150.0},
        {"Bob", 200.0},
        {"Charlie", 250.0},
        {"Diana", 300.0}
    };
    std::vector<CumulativeSale> cumulative_sales(sales.size());

    std::exclusive_scan(sales.begin(), sales.end(), cumulative_sales.begin(),
                       CumulativeSale{"None", 0.0},
                       [&](const CumulativeSale& acc, const Sale& current) -> CumulativeSale {
                           return CumulativeSale{current.salesperson, acc.cumulative_amount + current.amount};
                       });

    std::cout << "Exclusive Scan with Complex Structures:\n";
    for (const auto& cs : cumulative_sales) {
        std::cout << "Last Salesperson: " << cs.last_salesperson
                  << ", Cumulative Amount: " << cs.cumulative_amount << "\n";
    }
    /*
    Output:
    Last Salesperson: Alice, Cumulative Amount: 0
    Last Salesperson: Bob, Cumulative Amount: 150
    Last Salesperson: Charlie, Cumulative Amount: 350
    Last Salesperson: Diana, Cumulative Amount: 600
    */

    return 0;
}
