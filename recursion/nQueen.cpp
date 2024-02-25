#include <iostream>
#include <vector>
using namespace std;


bool isSafe(int col, int row, vector<string> &board, int n){
    int col1 = col;
    int row1 = row;

    // row checking
    while(col>=0){
        if(board[row][col]=='Q'){
            return false;
        }
        col--;
    }
    col = col1;
    row = row1;
    // upper diagonal checking
    while(row>=0 && col>=0){
        if(board[row][col]=='Q'){
            return false;
        }
        col--;
        row--;
    }

    // lower diagonal checking
    col = col1;
    row = row1;
    while(col>=0 && row<n){
        if(board[row][col]=='Q'){
            return false;
        }
        row++;
        col--;
    }
    return true;
}

void solve(int col, vector<string> &board, vector<vector<string> > &ans, int n){
    if(col>=n){
        ans.push_back(board);
        return;
    }
    for(int i = 0; i < n; i++){
        if(isSafe(col,i,board,n)){
            board[i][col] = 'Q';
            solve(col+1,board,ans,n);
            board[i][col] = '.';
        }
    }

    


}

int main(){
    int n = 4;
    vector<vector<string> > ans;
    vector<string> board(n);
    string s(n,'.');
    for(int i =0; i<n; i++){
        board[i] = s;
    }
    int col = 0;
    
    solve(col,board,ans,n);

    for(int i = 0; i<n;i++){
        for(int j= 0; j<n;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
}