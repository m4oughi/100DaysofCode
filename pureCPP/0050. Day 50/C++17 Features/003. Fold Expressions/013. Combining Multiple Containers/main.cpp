#include <iostream>
#include <vector>

template <typename... Containers>
auto mergeContainers(const Containers&... containers) {
    std::vector<typename std::common_type<typename Containers::value_type...>::type> result;
    (result.insert(result.end(), containers.begin(), containers.end()), ...);
    return result;
}

int main() {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {4, 5, 6};
    std::vector<int> merged = mergeContainers(v1, v2);

    for (int num : merged)
        std::cout << num << " ";
    std::cout << '\n';

    return 0;
}
