#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;


    /*
      arr , &arr , &arr[0] are the same thing. They all represent the address of the 
      first element of an array
    */ 

    cout << ptr  << endl;
    cout << *ptr << endl;
    cout << *ptr + 1 << endl;
    cout << *(ptr + 1) << endl;
    cout << &ptr << endl;

    // // sizeof int is 4bytes 
    // // size of pointer is 8bytes
    cout << sizeof(arr) << endl;
    cout << sizeof(ptr) << endl;

    /*
        arr[1] -> *(arr + 1)
    */

    // all of them are the same thing
    cout << arr[1] << endl;
    cout << 1[arr] << endl;
    cout << *(arr + 1) << endl;

}