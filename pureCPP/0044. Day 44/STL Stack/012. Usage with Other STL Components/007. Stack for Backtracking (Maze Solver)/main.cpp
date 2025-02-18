#include <iostream>
#include <stack>

const int N = 4;
int maze[N][N] = { {1, 1, 0, 0},
                   {0, 1, 1, 0},
                   {0, 0, 1, 1},
                   {0, 0, 0, 1} };

bool isValid(int x, int y, bool visited[N][N]) {
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1 && !visited[x][y]);
}

void solveMaze() {
    std::stack<std::pair<int, int>> s;
    bool visited[N][N] = {false};
    s.push({0, 0});

    while (!s.empty()) {
        auto [x, y] = s.top();
        s.pop();

        if (x == N-1 && y == N-1) {
            std::cout << "Path found!" << std::endl;
            return;
        }

        visited[x][y] = true;

        if (isValid(x, y+1, visited)) s.push({x, y+1});
        if (isValid(x+1, y, visited)) s.push({x+1, y});
    }
    std::cout << "No path found!" << std::endl;
}

int main() {
    solveMaze();
    return 0;
}
