#include <iostream>
#include <vector>
#include <numeric>
#include <tuple>

struct Transaction {
    std::string id;
    double amount;
};

struct CumulativeTransaction {
    double total_amount;
    int transaction_count;
};

int main() {
    std::vector<Transaction> transactions = {
        {"T1", 100.0},
        {"T2", 200.0},
        {"T3", 150.0},
        {"T4", 250.0}
    };
    std::vector<CumulativeTransaction> cumulative(transactions.size());

    std::exclusive_scan(transactions.begin(), transactions.end(), cumulative.begin(),
                       CumulativeTransaction{0.0, 0},
                       [&](const CumulativeTransaction& acc, const Transaction& current) -> CumulativeTransaction {
                           return CumulativeTransaction{
                               acc.total_amount + current.amount,
                               acc.transaction_count + 1
                           };
                       });

    std::cout << "Exclusive Scan with Complex Aggregation:\n";
    for (const auto& ct : cumulative) {
        std::cout << "Total Amount: " << ct.total_amount
                  << ", Transaction Count: " << ct.transaction_count << "\n";
    }
    /*
    Output:
    Total Amount: 0, Transaction Count: 0
    Total Amount: 100, Transaction Count: 1
    Total Amount: 300, Transaction Count: 2
    Total Amount: 450, Transaction Count: 3
    */

    return 0;
}
