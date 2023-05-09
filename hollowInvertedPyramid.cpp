#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cin >> rowCount;
    for(int row = 0; row < rowCount; row++){   
        // for spaces
        for(int space = 0; space < row; space++){
            cout << " ";
        }  
        // for stars
        for(int col = 0; col < 2 * rowCount - 2 * row - 1; col++){
            if(col==0 || col == (2 * rowCount - 2 * row - 1)-1 || row == 0){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}