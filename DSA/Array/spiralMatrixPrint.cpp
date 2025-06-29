#include <bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> mat)
{
    vector<int> ans;
    int top = 0;
    int btm = mat.size() - 1;
    int l = 0;
    int r = mat[0].size() - 1;

    while (top <= btm && l <= r)
    {
        // l => r
        for (int i = l; i <= r; i++)
        {
            ans.push_back(mat[top][i]);
        }
        top++;

        // top => btm
        for (int i = top; i <= btm; i++)
        {
            ans.push_back(mat[i][r]);
        }
        r--;

        // r => l
        if (btm >= top)
        {
            for (int i = r; i >= l; i--)
            {
                ans.push_back(mat[btm][i]);
            }
            btm--;
        }
        // btm => top

        if (r >= l)
        {
            for (int i = btm; i >= top; i--)
            {
                ans.push_back(mat[i][l]);
            }
            l++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> mat = {
        {1, 2, 3, 4, 5},
        {6,7,8,9,10},
        // {11,12,13,14,15},
        // {16,17,18,19,20},
    };
    vector<int> answer = spiralOrder(mat);
    for (int x : answer)
    {
        cout << x << ", ";
    }
}