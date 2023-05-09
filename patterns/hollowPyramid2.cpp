#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cin >> rowCount;
    for(int row = 0; row < rowCount; row++){
        // for spaces
        for(int space = 0; space < rowCount - row - 1; space++){
            cout << " ";
        }
        // for stars 
        for(int col = 0; col < 2 * row + 1; col++){
            if(col == 0 || col == 2 * row || row == rowCount - 1){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}