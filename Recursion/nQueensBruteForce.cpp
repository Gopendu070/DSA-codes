#include<iostream>
#include<vector>
#include<string>
using namespace std;                                                    // BRUTE_FORCE

class Queens{
public:
    void printBoard(vector<vector<string>> &res){
        int count=1;
    for (auto it:res){
        cout<<"Board "<<count<<"->"<<endl;
        for(auto x:it){
            cout<<"\t"<<x<<endl;
        }
        count++;
        cout<<endl<<endl;
    }
}
private:
    bool isSafe(int row, int col, vector<string> &board, int n){
        int primaryRow, primaryCol;
        primaryRow=row;
        primaryCol=col;

        while(row>=0 && col>=0){             // checking upper diagonal
            if(board[row][col] == 'Q')  
                return false;
            row--;
            col--;
        }

        row=primaryRow;          // Restoring row  &  col 
        col=primaryCol;
        while(col>=0){                     // checking L.H.S of row
            if(board[row][col] == 'Q')
                return false;
            col--;
        }

         row=primaryRow;
        col=primaryCol;
        while(row<n && col>=0){                 // checking lower diagonal
            if(board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }
    return true;
    }
private:
    void solution(int col, vector<string> &board, vector<vector<string>> &ans,  int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0; row<n; row++){
            if(isSafe(row, col, board, n)){
                board[row][col]='Q';

                solution(col+1, board, ans, n);

                board[row][col]='.';     //Back-tracking step
            }
        }

    }
public:
    vector<vector<string>> nQueens(int n){
        vector<vector<string>> ans;
        vector<string> board;
        string s(n, '.');
           for(int i=0; i<n; i++)
                board.push_back(s);
        solution(0, board, ans, n);
    return ans;
    }

};
/*  N - Queens problem is to place n - queens in such a manner on an n x n chessboard 
that no queens attack each other by being in the same row, column or diagonal. */
int main(){
    int n;
    Queens q;
    vector<vector<string>> chessBoard;
    cout<<"Enter number of Queens: ";
    cin>>n;
    cout<<endl;
    chessBoard=q.nQueens(n);
    q.printBoard(chessBoard);


}