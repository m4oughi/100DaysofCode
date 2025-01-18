#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::cout << "Enter integers (end input with a non-integer): ";
    std::vector<int> evens, odds;

    std::istream_iterator<int> in(std::cin), end;
    for (; in != end; ++in) {
        if (*in % 2 == 0) {
            evens.push_back(*in);
        } else {
            odds.push_back(*in);
        }
    }

    std::cout << "Evens: ";
    std::copy(evens.begin(), evens.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << "\nOdds: ";
    std::copy(odds.begin(), odds.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
