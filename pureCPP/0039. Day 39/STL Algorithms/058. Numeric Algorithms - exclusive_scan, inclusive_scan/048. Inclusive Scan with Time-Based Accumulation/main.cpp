#include <iostream>
#include <vector>
#include <numeric>
#include <string>

struct Transaction {
    std::string date; // Format: YYYY-MM-DD
    double amount;
};

struct DailyTotal {
    std::string last_date;
    double total_amount;
};

int main() {
    std::vector<Transaction> transactions = {
        {"2023-10-01", 100.0},
        {"2023-10-01", 150.0},
        {"2023-10-02", 200.0},
        {"2023-10-02", 250.0},
        {"2023-10-03", 300.0}
    };
    std::vector<DailyTotal> inclusive_result(transactions.size());

    std::inclusive_scan(transactions.begin(), transactions.end(), inclusive_result.begin(),
        [&](const DailyTotal& acc, const Transaction& current) -> DailyTotal {
            if (acc.last_date != current.date) {
                // Reset total_amount for a new day
                return DailyTotal{current.date, current.amount};
            } else {
                // Accumulate amount for the same day
                return DailyTotal{current.date, acc.total_amount + current.amount};
            }
        },
        DailyTotal{"", 0.0}
    );

    std::cout << "Inclusive Scan with Time-Based Accumulation:\n";
    for (const auto& dt : inclusive_result) {
        std::cout << "Date: " << dt.last_date << ", Total Amount: $" << dt.total_amount << "\n";
    }
    /*
    Output:
    Date: 2023-10-01, Total Amount: $100
    Date: 2023-10-01, Total Amount: $250
    Date: 2023-10-02, Total Amount: $200
    Date: 2023-10-02, Total Amount: $450
    Date: 2023-10-03, Total Amount: $300
    */

    return 0;
}
