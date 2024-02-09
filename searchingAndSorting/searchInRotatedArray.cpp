#include <iostream>
using namespace std;
int findPivotEl(int arr[], int start, int end){
    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] >= arr[0]){ // Pivot is in the right half
            start = mid + 1;
        } else { // Pivot is in the left half or mid itself
            end = mid;
        }
    }
    return start;       
}

int binarySearch(int arr[],int start,int end,int key){
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==key){
            return mid;
        } else if(arr[mid] > key){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
}

int main(){
    int arr[6] = {7,11,12,13,2,3};
    int size = 6;
    int start = 0;
    int end = size - 1;
    int key = 3;
    // cout << findPivotEl(arr,start,end) << endl;
    int pivotEl = findPivotEl(arr,start,end);
    if(key > arr[pivotEl] && key <= arr[end]){
        cout << binarySearch(arr,pivotEl,end,key);
    } else {
        cout << binarySearch(arr,0,pivotEl - 1,key);
    }
}

