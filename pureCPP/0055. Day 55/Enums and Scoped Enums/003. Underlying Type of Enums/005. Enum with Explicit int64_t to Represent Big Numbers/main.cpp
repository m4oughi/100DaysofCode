#include <iostream>
#include <cstdint>

enum class Currency : int64_t {
    Dollar = 1000000000,
    Euro = 2000000000,
    Yen = 3000000000
};

int main() {
    Currency c = Currency::Yen;
    std::cout << "Yen value: " << static_cast<int64_t>(c) << std::endl;
}
