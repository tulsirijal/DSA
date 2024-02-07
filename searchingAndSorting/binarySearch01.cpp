#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int target) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while(start <= end){
        if(target == arr[mid]){
            return mid;
        } else if(target < arr[mid]){
            end = mid - 1;
            mid = (start + end) / 2; 
        } else {
            start = mid + 1;
            mid = (start + end) / 2;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int target = 2;
    int size = sizeof(arr) / sizeof(arr[0]);
    int number = binarySearch(arr,size,target);
    if(number == -1){
        cout << "Target is not found" << endl;
    } else {
        cout << "Target found at " << number <<" index" << endl;
    }
    return 0;
}