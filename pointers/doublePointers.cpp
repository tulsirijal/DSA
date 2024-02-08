#include <iostream>
using namespace std;

void update(int **ptr){
    // **ptr = **ptr + 1; // Changes the value;
    // *ptr = *ptr + 1; // changes the value;
    ptr = ptr + 1; // doesn't change since new memory block is created. Pass by value.
}

int main(){

    int num = 5;
    int *ptr = &num;
    int **p = &ptr;

    // cout << "Num-> " << num << endl;
    // cout << "Address of num-> " << ptr << endl;
    cout << "Address of ptr-> " << p << endl;

    /*
        double pointer is basically a pointer poiting at another pointer.
        for eg: *ptr is a pointer poiting at  int num, and p is the pointer pointing at pointer ptr.
    */

   cout << "Value of num-> " << num << endl;
//    cout << "Value of num-> " << *ptr << endl;
//    cout << "Value of num-> " << **p << endl;
   update(p);
   cout << num << endl;
   cout << "Address of ptr-> " << p << endl;

}