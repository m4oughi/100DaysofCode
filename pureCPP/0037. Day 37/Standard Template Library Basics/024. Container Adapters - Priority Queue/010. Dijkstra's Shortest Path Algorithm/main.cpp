#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using Edge = std::pair<int, int>; // {weight, vertex}

void dijkstra(int start, const std::vector<std::vector<Edge>>& graph) {
    std::vector<int> dist(graph.size(), INT_MAX);
    std::priority_queue<Edge, std::vector<Edge>, std::greater<>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) continue;

        for (auto [weight, v] : graph[u]) {
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    for (size_t i = 0; i < dist.size(); ++i) {
        std::cout << "Distance to vertex " << i << ": " << dist[i] << "\n";
    }
}

int main() {
    std::vector<std::vector<Edge>> graph = {
        {{1, 1}, {4, 2}}, // Edges from vertex 0
        {{1, 2}, {2, 3}}, // Edges from vertex 1
        {{1, 3}},         // Edges from vertex 2
        {}                // Edges from vertex 3
    };

    dijkstra(0, graph);

    return 0;
}
