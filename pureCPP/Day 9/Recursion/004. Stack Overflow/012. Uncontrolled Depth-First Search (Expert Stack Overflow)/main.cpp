void DFS(int node, bool visited[], vector<int> adj[]) {
    visited[node] = true;  // Mark node as visited
    for (int neighbor : adj[node]) {
        if (!visited[neighbor])
            DFS(neighbor, visited, adj); // Recursive Case: explore neighbors
    }
}
