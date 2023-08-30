#include <iostream>
using namespace std;
void increment(int array[]){
    array[0] = array[0] + 1;
    cout << array[0] << endl;
}
bool findNumber(int arr[],int size,int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return true;
        }

    }
    return false;
}
int main(){
    // // declaration
    // int arr[53];
    // char array[106]; 
    // // initialisation
    // int crr[2] = {1,2};
    // char a[10] = {'a','b','c'};
    // // accessing the value of array using index
    // cout << a[0] << endl;
    
    // looping through an array
    // int array[] = {1,2,3,4,5,6,7,8};
    // for(int i=0; i < 8;i++){
    //     cout << array[i] << endl;
    // }
 
    //  taking input in an array
    // int num[5];
    // for(int i = 0; i <5;i++){
    //     cin >> num[i];
    // }
    // for(int i = 0; i < 5; i++){
    //     cout << num[i] << endl;
    // }

    // take the input and print their double
 
    // int nums[5];
    // for(int i = 0; i < 5; i++){
    //     cin >> nums[i];
    // }

    // for(int i = 0; i < 5; i++){
    //     cout << nums[i] * 2 << endl;
    // }

    // change the all elements to 1
    // int arr[] = {1,2,3,4,5};
    // for(int i = 0; i < 5; i++){
    //     arr[i] = 1;
    //     cout << arr[i] << endl;
    // }

    // arrays in function
    // pass by reference
    // int array[] = {1,2,3};
    // increment(array);
    // cout << array[0] << endl;

    //  linear search in arrays

    int array[] = {1,2,3,4,5};
    int size = 5;
    int n;
    cout << "Enter the number you want to search" << endl;
    cin >> n;
    if(findNumber(array,size,n)){
        cout << "Found";
    } else {
        cout << "Not Found";
    }

}
