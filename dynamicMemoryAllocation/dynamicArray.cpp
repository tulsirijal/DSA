#include <iostream>
using namespace std;

int main(){

    int arr[5]; //static memory allocation

    int size;
    cin >> size;
    int *arr1 = new int [size]; //dynamic memory allocation. 

    /*
        the *arr1 pointer points at the first element of the array.
    */

   // take the input for the array.
    for(int i=0;i<size;i++){
        cin >> arr1[i];
    }

    // print the array items.
    for(int i = 0;i<size;i++){
        cout << arr1[i];
        
    }
    
    delete []arr1; // free the memory manually.


}