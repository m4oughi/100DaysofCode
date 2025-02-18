#include <iostream>
#include <stack>
#include <vector>

void dfs(int start, const std::vector<std::vector<int>>& graph) {
    std::vector<bool> visited(graph.size(), false);
    std::stack<int> s;
    s.push(start);

    while (!s.empty()) {
        int node = s.top();
        s.pop();

        if (!visited[node]) {
            visited[node] = true;
            std::cout << node << " ";

            for (int neighbor : graph[node]) {
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
            }
        }
    }
}

int main() {
    std::vector<std::vector<int>> graph = {
        {1, 2}, {0, 3, 4}, {0, 5}, {1}, {1}, {2}
    };

    std::cout << "DFS Traversal: ";
    dfs(0, graph);
    return 0;
}
