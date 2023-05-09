#include <iostream>
using namespace std;
int main(){
  int rowCount;
  int colCount;
  cin >> rowCount;
  cin >> colCount;
  for(int row = 0; row < rowCount; row++){
    if(row==0 || row == rowCount - 1){
      for(int col = 0; col < colCount; col++){
        cout << "*";
      }
    }
    else {
      cout << "*";
      for(int space = 0; space < colCount - 2;space++){
        cout << " ";
      }
      cout << "*";
    }
  cout << endl;
  }
}
