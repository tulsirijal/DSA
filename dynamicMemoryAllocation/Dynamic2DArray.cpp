#include <iostream>
using namespace std;

int main(){
    int row;
    cin >> row;
    int col;
    cin >> col;

    /*
        **arr pointer is pointing at another pointer in the heap memory.
    */

    int **arr = new int* [row]; // array of pointers

    // each  pointer in the array pointing at the new dynamic array.
   for(int i =0; i<row;i++){
        arr[i] = new int [col];
   }

    // taking the input for the array .
   for(int i =0; i<row;i++){
    for(int j=0;j<col;j++){
        cin >> arr[i][j];
    }
   }

   //printing the items of 2d array.
   for(int i =0; i<row;i++){
    for(int j=0;j<col;j++){
        cout << arr[i][j];
    }
   }

   for(int i =0;i<row;i++){
    delete [] arr[i]; // this deletes the internal arrays created. all the columns
   }
   delete [] arr; // this deletes the outer array which had pointers for all the inner arrays



}