#include <iostream>
#include <stack>

struct Position {
    int x, y;
};

bool isValid(int x, int y, int N, bool visited[][4], int maze[][4]) {
    return x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1 && !visited[x][y];
}

void solveMaze(int maze[4][4]) {
    std::stack<Position> s;
    bool visited[4][4] = {false};
    s.push({0, 0});

    while (!s.empty()) {
        Position p = s.top();
        s.pop();

        if (p.x == 3 && p.y == 3) {
            std::cout << "Path found!" << std::endl;
            return;
        }

        visited[p.x][p.y] = true;

        if (isValid(p.x, p.y + 1, 4, visited, maze)) s.push({p.x, p.y + 1});
        if (isValid(p.x + 1, p.y, 4, visited, maze)) s.push({p.x + 1, p.y});
    }
    std::cout << "No path found!" << std::endl;
}

int main() {
    int maze[4][4] = {
        {1, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 1, 1},
        {0, 0, 0, 1}
    };

    solveMaze(maze);
    return 0;
}
