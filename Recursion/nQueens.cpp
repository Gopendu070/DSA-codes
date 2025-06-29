#include<iostream>
#include<vector>
#include<string>
using namespace std;                                    //OPTIMIZED

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

public:
     void solution(int col, vector<string> &board, vector<vector<string>> &ans,  int n, vector<int> &leftRow, vector<int> &lowerDiagonal,  vector<int> &upperDiagonal){
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0; row<n; row++){
            if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[(n-1)+(col-row)]==0){
                board[row][col]='Q';
                leftRow[row]=1;
                lowerDiagonal[row+col]=1;
                upperDiagonal[(n-1)+(col-row)]=1;


                solution(col+1, board, ans, n, leftRow, lowerDiagonal, upperDiagonal);

                board[row][col]='.';                 //Back-tracking steps
                leftRow[row]=0;                    
                lowerDiagonal[row+col]=0;
                upperDiagonal[(n-1)+(col-row)]=0;
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
        vector<int> leftRow(n, 0); 
        vector<int> lowerDiagonal((2*n)-1, 0);
        vector<int> upperDiagonal((2*n)-1, 0);
    
        solution(0, board, ans, n, leftRow, lowerDiagonal, upperDiagonal);
     
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