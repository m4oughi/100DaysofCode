#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, std::pair<std::string, double>> data = {1, {"Pi", 3.1415}};

    auto [id, nested] = data;
    auto [label, value] = nested;

    std::cout << "ID: " << id << ", Label: " << label << ", Value: " << value << '\n';
    return 0;
}
