#include <iostream>
#include <vector>`
using namespace std;

void merge(int arr[],int low, int mid, int high){
    vector<int> temp;
    int leftArrayStartingIndex = low;
    int rightArrayStartingIndex = mid + 1;
    while(leftArrayStartingIndex<=mid && rightArrayStartingIndex <= high){
        if(arr[leftArrayStartingIndex] < arr[rightArrayStartingIndex]){
            temp.push_back(arr[leftArrayStartingIndex++]);
        } else {
            temp.push_back(arr[rightArrayStartingIndex++]);
        }
    }
    while(leftArrayStartingIndex<=mid){
        temp.push_back(arr[leftArrayStartingIndex++]);
    }
    while(rightArrayStartingIndex<=high){
        temp.push_back(arr[rightArrayStartingIndex++]);
    }
    for(int i = low; i<=high;i++){
        arr[i] = temp[i - low];
    }



}

void mergeSort(int arr[], int low, int high){
    if(low>=high){
        return;
    }
    int mid = low + (high - low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid + 1, high);
    merge(arr,low,mid,high);    

}

int main(){

    int arr[5] = {3,1,2,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size - 1);
    for(int i = 0; i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}