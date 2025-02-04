#include <iostream>
#include <vector>
#include <list>
#include <map>

int main() {
    std::vector<int> vec;
    std::list<int> lst = {10};
    std::map<int, std::string> mp;

    std::cout << "Is vector empty? " << (vec.empty() ? "Yes" : "No") << "\n"; // Yes
    std::cout << "Is list empty? " << (lst.empty() ? "Yes" : "No") << "\n"; // No
    std::cout << "Is map empty? " << (mp.empty() ? "Yes" : "No") << "\n"; // Yes

    mp[1] = "one";
    std::cout << "Is map empty after insertion? " << (mp.empty() ? "Yes" : "No") << "\n"; // No

    return 0;
}
