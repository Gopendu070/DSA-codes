#include<iostream>
#include<vector>
using namespace std;

class Solve{
public:
    bool isValid(vector<vector<char>> &board, int row, int col, char c){
        for(int i=0; i<9; i++){
            if(board[i][col]==c)            //for column
                return false;
            if(board[row][i]==c)            //for row
                return false;
            if(board [ 3*(i/3) + i/3 ][ 3*(i/3) + i%3 ] == c)    //for 3x3 square
                return false;
        }
        return true;
    }


    bool sudokuSolve(vector<vector<char>> &board){
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){

                if(board[i][j]=='.'){

                    for(char c='1'; c<='9'; c++){

                        if(isValid(board, i, j, c)){
                            board[i][j]=c;           //if 'c' is valid then assign it at(i,j)

                            if(sudokuSolve(board)){   //callinf fn for the next empty location
                                return true;
                            }
                            else{
                                board[i][j]='.';
                            }
                        }
                    }
                return false;
                }
            }
        }
    return true;
    }
};


int main(){

return 0;
}