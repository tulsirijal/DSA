#include <iostream>
using namespace std;

void print(int *ptr){
    cout << ptr << endl;
}

void update(int *ptr){
    // ptr = ptr + 1;
    // cout << ptr << endl;
    *ptr = *ptr + 1;
}

void getSum(int *arr,int n){

    /*
     sizeof(arr) gives 8 instead of 4 because it is passed as a pointer
    *arr or arr[] is the same
    */

    cout << "Size-> " << sizeof(arr) << endl;


    int sum = 0;
    for(int i = 0; i < n; i++){
        sum+=arr[i];
    }
    cout << sum << endl;
}

int main(){

    int num = 5;
    int *ptr = &num;
    
    int arr[5] = {1,2,3,4,5};

    // print(ptr);

    cout << "Before " << ptr << endl;
    cout << "Before " << num << endl;

    update(ptr);

    cout << "After " << ptr << endl;
    cout << "After " << num << endl;

    getSum(arr,5);

    // only sending the array from index 3 
    getSum(arr + 3, 2);

}