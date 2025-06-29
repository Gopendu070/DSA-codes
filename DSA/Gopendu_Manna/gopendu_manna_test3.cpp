#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSafeToPlace(vector<string>& grid, int r, int c, int n) {
    for (int i = 0; i < r; i++) {
        if (grid[i][c] == 'Q') {
            return false;
        } 
    }
    
    for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
        if (grid[i][j] == 'Q') {
            return false;
        }
    }
    
    for (int i = r - 1, j = c + 1; i >= 0 && j < n; i--, j++) {
        if (grid[i][j] == 'Q') {
            return false;
        }
    }
    
    return true;
}

void placeQueens(int r, vector<string>& g, vector<vector<string>>& solutions, int n) {
    if (r == n) {
        solutions.push_back(g);
        return;
    }

    for (int c = 0; c < n; c++) {
        if (isSafeToPlace(g, r, c, n)) {
            g[r][c] = 'Q';
            placeQueens(r + 1, g, solutions, n);
            g[r][c] = '.';
        }
    }
}

vector<vector<string>> solve(int n) {
    vector<vector<string>> solutions;
    vector<string> grid(n, string(n, '.'));

    placeQueens(0, grid, solutions, n);

    return solutions;
}

int main() {
    int n ;
cin>>n;
    vector<vector<string>> solutions = solve(n);

    for (const auto& solution : solutions) {
        for (const auto& row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}
