#include <iostream>
using namespace std;
bool isSorted(int *arr,int size){
    if(size==0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    } else {
        return isSorted(arr+1,size-1);
    }
}
int main(){

    int arr[6] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    
    bool ans = isSorted(arr,size);
    if(ans){
        cout << "This array is sorted! " << endl;
    } else {
        cout << "This array is not sorted! " << endl;
    }

}