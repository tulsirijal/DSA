#include <iostream>
using namespace std;
int main(){

    int rowCount;
    cin >> rowCount;
    // upper half of diamond
    for (int row = 0; row < rowCount; row++)
    {
        // for left side stars
        for (int col = 0; col < rowCount - row; col++)
        {
            cout << "*";
        }

        // for spaces in the middle
        for (int space = 0; space < 2 * row + 1; space++)
        {
            cout << " ";
        }
        // for right side stars
        for (int col = 0; col < rowCount - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // lower half of the diamond
    for (int row = 0; row < rowCount; row++)
    {
        // for right side of stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        // for spaces in the middle
        for (int space = 0; space < 2 * rowCount - 2 * row - 1; space++)
        {
            cout << " ";
        }
        // for right side of stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}