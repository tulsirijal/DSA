#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cin >> rowCount;
    for(int row = 0; row < rowCount; row++){
        // for spaces before the characters
        for(int space = 0; space < rowCount - row - 1; space++){
            cout << " ";
        }
        // for characters including spaces in between
        // initialising the num with 1
        int num = 1;
        for(int col = 0; col < 2 * row + 1; col++){
            // if it is the first or the last row
            if(row == 0 || row == rowCount - 1){
                // printing number only if the current column is even
                if(col%2==0){
                    cout << num;
                    num++;
                } else {
                    cout << " ";
                }
            } else {
                // if it is the first column , print 1
                // if it is the last column, print that current row + 1
                if(col==0){
                    cout << 1;
                } else if(col==2 * row){ 
                    cout << row + 1;
                } else {
                    cout << ' ';
                }
            }
        }
        cout << endl;
    }
}