#include <iostream>
#include <map>

int main() {
    std::map<std::pair<int, int>, std::string> pointLabels;

    pointLabels[{1, 2}] = "A";
    pointLabels[{3, 4}] = "B";
    pointLabels[{5, 6}] = "C";

    std::cout << "Point (3,4) is labeled as: " << pointLabels[{3, 4}] << "\n";

    return 0;
}
