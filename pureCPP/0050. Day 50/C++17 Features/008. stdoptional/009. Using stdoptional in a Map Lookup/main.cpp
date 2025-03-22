#include <iostream>
#include <optional>
#include <map>

std::optional<int> getSalary(const std::map<std::string, int>& salaries, const std::string& name) {
    auto it = salaries.find(name);
    if (it != salaries.end()) return it->second;
    return std::nullopt;
}

int main() {
    std::map<std::string, int> salaries = {{"Alice", 5000}, {"Bob", 6000}};

    std::cout << "Alice's salary: " << getSalary(salaries, "Alice").value_or(0) << '\n';
    std::cout << "Charlie's salary: " << getSalary(salaries, "Charlie").value_or(0) << '\n';

    return 0;
}
