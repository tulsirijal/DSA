#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int row,int col, int n){
    return row>=0 && row<n && col>=0 && col<n;
}

void ratInMaze(int row,int col, vector<vector<int> >& maze,vector<string> &ans, string &output,int size){
    if(!isSafe(row,col, size) || maze[row][col]==0){
        return;
    }
    if(row==size-1 && col==size-1){
        ans.push_back(output);
        return;
    }
    maze[row][col] =0;
    output.push_back('D');
    ratInMaze( row + 1,col, maze,ans,output,size);
    output.pop_back();
  
    output.push_back('L');
    ratInMaze( row ,col-1, maze,ans,output,size);
    output.pop_back();
  
    output.push_back('R');
    ratInMaze( row ,col+1, maze,ans,output,size);
    output.pop_back();
    output.push_back('U');
    ratInMaze( row - 1,col, maze,ans,output,size);
    output.pop_back();
    maze[row][col] = 1;

}

int main(){

    vector<vector<int> > maze = {{1,0,0,0},{1,1,0,0},{1,1,0,0},{0,1,1,1}};
    string output;
    vector<string> ans;
    int row = 0;
    int col = 0;
    int size = maze.size();
    ratInMaze(row,col,maze,ans,output,size); 
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    };

    return 0;
}
