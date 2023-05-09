#include <iostream>
using namespace std;
int main(){
    int rowCount;
    cin >> rowCount;
    for(int row = 0; row < rowCount; row++){
        // for spaces before stars
        for(int space = 0; space < rowCount - row - 1; space++){
            cout << " ";
        }
        // for stars
        for(int col = 0; col < row + 1; col++){
            cout << "* ";
        }
        cout << endl;
    }
}