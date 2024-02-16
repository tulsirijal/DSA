#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left<=mid && right <= high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }
    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=high){
        temp.push_back(arr[right++]);
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

    int arr[4] = {3,1,2,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size - 1);
    for(int i = 0; i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}