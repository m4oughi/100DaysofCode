#include <iostream>
#include <map>

int main() {
    std::map<int, char> data = {{1, 'A'}, {2, 'B'}, {3, 'C'}, {4, 'D'}, {5, 'E'}};

    // Erase elements from the second to the fourth
    data.erase(++data.begin(), std::prev(data.end()));

    for (const auto &entry : data) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }
    return 0;
}
