#include <iostream>
#include <vector>
using namespace std;



void solveNQueen(int col, vector<string> &board, vector<vector<string> > &ans, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, int n ) {
        if(col>=n){
            ans.push_back(board);
            return;
        }

        for(int row=0;row<n;row++){
            if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0) {
                board[row][col] = 'Q';
                leftRow[row] = 1;
                lowerDiagonal[row+col] = 1;
                upperDiagonal[n-1 + col - row] = 1;
                solveNQueen(col+1,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
                board[row][col] = '.';
                leftRow[row] = 0;
                lowerDiagonal[row+col] = 0;
                upperDiagonal[n-1 + col - row] = 0;
            }
        }
}

int main(){
    int n = 4;
    int col = 0;
    vector<vector<string> > ans;
    vector<string> board(n);
    string s(n,'.');
    for(int i = 0; i <n;i++){
        board[i] = s;
    }
    vector<int> leftRow(n,0);
    vector<int> upperDiagonal(2*n-1,0);
    vector<int> lowerDiagonal(2*n-1,0);

    solveNQueen(col,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
    for(int i = 0; i<n;i++){
        for(int j= 0; j<n;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
}