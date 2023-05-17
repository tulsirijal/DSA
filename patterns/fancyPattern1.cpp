#include <iostream>
using namespace std;
int main(){
     int rowCount;
    cin >> rowCount;
  for(int row = 0; row < rowCount; row++){
    for(int col = 0; col < row + 1; col++){
      cout << row + 1;
      if(col == row){
        cout << "";
      } else {
        cout << "*";
      }
    }
    cout << endl;
  }
  for(int row = 0; row < rowCount; row++){
    for(int col = 0; col < rowCount - row; col++){
      cout << rowCount - row ;
      if(col == rowCount - row - 1){
        cout << "";
      } else {
        cout << "*";
      }
    }
    cout << endl;
  }
}