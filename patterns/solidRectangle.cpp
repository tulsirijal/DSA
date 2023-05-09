#include <iostream>
using namespace std;
int main(){
  int rowCount;
  int colCount;
  cin >> rowCount;
  cin >> colCount;
  for(int row = 0; row < rowCount; row++){
    for(int col = 0; col < colCount; col++){
      cout << "*";
    }
    cout << endl;  
  }
}