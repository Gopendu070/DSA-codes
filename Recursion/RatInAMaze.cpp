#include <iostream>
#include <vector>
using namespace std;
void solve(int i, int j, vector<vector<int>> &maze, int n, string move, vector<string> &ans, vector<vector<int>> &visited)
{
    // Base Case: Reached the last cell that is (n-1,n-1)
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(move);
        return;
    }
    // Down
    if (i + 1 < n && visited[i + 1][j] == 0 && maze[i + 1][j] == 1)
    {
        visited[i][j] = 1;
        solve(i + 1, j, maze, n, move + 'D', ans, visited);
        // whenever you return mark the cell as unvisited
        visited[i][j] = 0;
    }
    // Left
    if (j - 1 >= 0 && visited[i][j - 1] == 0 && maze[i][j - 1] == 1)
    {
        visited[i][j] = 1;
        solve(i, j - 1, maze, n, move + 'L', ans, visited);
        visited[i][j] = 0;
    }
    // Right
    if (j + 1 < n && visited[i][j + 1] == 0 && maze[i][j + 1] == 1)
    {
        visited[i][j] = 1;
        solve(i, j + 1, maze, n, move + 'R', ans, visited);
        visited[i][j] = 0;
    }
    // Up
    if (i - 1 >= 0 && visited[i - 1][j] == 0 && maze[i - 1][j] == 1)
    {
        visited[i][j] = 1;
        solve(i - 1, j, maze, n, move + 'U', ans, visited);
        visited[i][j] = 0;
    }
}
int main()
{
    vector<vector<int>> maze =
        {
            {1, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 1, 1, 0},
            {0, 0, 1, 1},
        };
    vector<vector<int>> visited =
        {
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        };
    vector<string> ans;
    solve(0, 0, maze, maze.size(), "", ans, visited);
    //Printing the paths
    if (ans.size() == 0)
        cout << "No Paths available.";
    else
    {
        cout << "Possible Path:" << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            for (auto m : ans[i])
                cout << m << " ";
            cout << endl;
        }
    }
}