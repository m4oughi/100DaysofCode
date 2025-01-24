#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> flight_ids = {101, 202, 303, 404, 505};
    int target_flight = 404;

    if (std::binary_search(flight_ids.begin(), flight_ids.end(), target_flight)) {
        std::cout << "Flight ID " << target_flight << " is scheduled.\n";
    } else {
        std::cout << "Flight ID " << target_flight << " is not found.\n";
    }

    return 0;
}
