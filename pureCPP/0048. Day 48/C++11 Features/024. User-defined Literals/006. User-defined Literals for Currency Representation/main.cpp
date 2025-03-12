#include <iostream>

class Currency {
    double value;
public:
    constexpr Currency(double v) : value(v) {}
    void show() const {
        std::cout << "Amount: $" << value << '\n';
    }
};

constexpr Currency operator"" _usd(long double amount) {
    return Currency(amount);
}

int main() {
    auto price = 99.99_usd;
    price.show();
    return 0;
}
