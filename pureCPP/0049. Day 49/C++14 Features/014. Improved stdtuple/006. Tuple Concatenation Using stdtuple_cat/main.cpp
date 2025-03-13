#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, char> t1(10, 'A');
    std::tuple<double, std::string> t2(3.14, "Hello");

    auto mergedTuple = std::tuple_cat(t1, t2);

    std::cout << "Merged Tuple: "
              << std::get<0>(mergedTuple) << ", "
              << std::get<1>(mergedTuple) << ", "
              << std::get<2>(mergedTuple) << ", "
              << std::get<3>(mergedTuple) << "\n";

    return 0;
}
