#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cin >> rowCount;
    for(int row = 0; row < rowCount; row++){
        for(int col = 0; col < row + 1; col++){
            int ans = col + 1;
            char ch = ans + 'A' - 1;
            cout << ch;
        }
        // loop for reverse alphabet
        for(int col = row; col>=1;col--){
            int ans = col;
            char ch = ans + 'A' - 1;
            cout << ch;
        }
        cout << endl;
    }
}