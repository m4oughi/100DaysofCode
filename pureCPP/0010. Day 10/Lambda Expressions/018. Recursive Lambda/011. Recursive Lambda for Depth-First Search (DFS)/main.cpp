#include <iostream>
#include <vector>
#include <functional>

int main() {
    std::vector<std::vector<int>> graph = {
        {1, 2},  // neighbors of node 0
        {0, 3},  // neighbors of node 1
        {0, 3},  // neighbors of node 2
        {1, 2}   // neighbors of node 3
    };
    std::vector<bool> visited(4, false);

    std::function<void(int)> dfs = [&](int node) {
        visited[node] = true;
        std::cout << "Visited node: " << node << std::endl;
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor);
            }
        }
    };

    dfs(0); // Start DFS from node 0
    return 0;
}
