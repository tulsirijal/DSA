#include <iostream>
using namespace std;
bool isPresent(int *arr,int size,int key){
    if(size==0){
        return false;
    }

    if(arr[0]==key){
        return true;
    } else {
        return isPresent(arr+1,size-1,key);
    }
}
int main(){

    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int key = 6;
    bool ans = isPresent(arr,size,key);
    if(ans){
        cout << "This element is Present! " << endl;
    } else {
        cout << "This element is not Present! " << endl;
    }

}