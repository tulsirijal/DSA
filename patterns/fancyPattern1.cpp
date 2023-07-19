#include <iostream>
using namespace std;
int main(){
  // int rowCount;
  // cin >> rowCount;
  // for (int row = 0; row < rowCount; row++)
  // {
  //   for (int col = 0; col < row + 1; col++)
  //   {
  //     cout << row + 1;
  //     if (col != row)
  //     {
  //       cout << "*";
  //     }
  //     else
  //     {
  //       cout << "";
  //     }
  //   }
  //   cout << endl;
  // }
  // for(int row = 0;row<rowCount;row++){
  //   for(int col = 0; col < rowCount - row ;col++){
  //     cout << rowCount - row;
  //     if(col == rowCount - row - 1){
  //       cout << "";
  //     }
  //     else {
  //       cout << "*";
  //     }
  //   }
  //   cout << endl;
  // }
  
  // int rowCount;
  // cin >> rowCount;
  // for(int row = 0; row < rowCount; row++){
  //   // spaces
  //   for(int space = 0; space < rowCount - row - 1; space++){
  //     cout << " ";
  //   }
  //   // for counting
  //   for(int col = 0 ; col < row+1; col++){
  //     cout << row + col + 1;
  //   }
  //   // for reverse counting
  //   int start  = 2 * row;
  //   for(int num = 0; num < row; num++){
  //     cout <<  start;
  //     start--;
  //   }
  //   cout << endl;
  // } 
    

  // int rowCount;
  // cin >> rowCount;
  // for(int row = 0; row < rowCount; row++){
  //   // for spaces
  //   for(int space = 0; space < rowCount - row - 1; space++){
  //     cout << " ";
  //   }
  //   int count = 1;
  //   for(int col = 0; col < 2 * row + 1; col++){
  //     if(row == 0 || row == rowCount - 1 ){
  //       if(col % 2 == 0){
  //         cout << count;
  //         count++;
  //       } else {
  //         cout << " ";
  //       }
  //     } else {
  //       if(col==0){
  //         cout << 1;
  //       } 
  //       else if(col==2 * row){
  //         cout << row + 1;
  //       }
  //        else {
  //         cout << " ";
  //        }
  //     }
  //   }
  //   cout << endl;
  // }

  int temperature = 10;
  switch (temperature)
  {
  case 20:
    cout << "Chilly weather";
    break;
  case 30:
    cout << "Hot weather";
    break;
  default:
    cout << "cold";
    break;
  }
} 
 