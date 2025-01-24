#include <iostream>
#include <vector>
#include <numeric>
#include <string>

struct Order {
    std::string product;
    double price;
    int quantity;
};

struct CumulativeOrder {
    double total_price;
    int total_quantity;
};

int main() {
    std::vector<Order> orders = {
        {"Widget", 10.0, 2},
        {"Gadget", 15.5, 3},
        {"Thingamajig", 7.25, 5}
    };
    std::vector<CumulativeOrder> cumulative_orders(orders.size());

    std::inclusive_scan(orders.begin(), orders.end(), cumulative_orders.begin(),
        [&](const Order& a, const Order& b) -> CumulativeOrder {
            static double running_total_price = 0.0;
            static int running_total_quantity = 0;
            running_total_price += b.price * b.quantity;
            running_total_quantity += b.quantity;
            return CumulativeOrder{running_total_price, running_total_quantity};
        }
    );

    std::cout << "Inclusive Scan on Custom Structures:\n";
    for (const auto& co : cumulative_orders) {
        std::cout << "Total Price: " << co.total_price
                  << ", Total Quantity: " << co.total_quantity << "\n";
    }
    /*
    Output:
    Total Price: 20, Total Quantity: 2
    Total Price: 66.5, Total Quantity: 5
    Total Price: 103.75, Total Quantity: 10
    */

    return 0;
}
