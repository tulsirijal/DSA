#include <iostream>
using namespace std;

int main(){
    int num = 5;
    int *ptr = &num;

    // * -> Value at the address
    //  & -> address of
    //  *ptr = &num -> ptr stores the address of the int num.

    cout << "address of num -> " <<  &num << endl;
    cout << "address of num stored in ptr pointer-> " << ptr << endl;
    cout << "value at the address stored in ptr pointer-> " << *ptr << endl;
    int newValue = *ptr + 1;
    cout << newValue << endl;
    cout << num << endl;
}
