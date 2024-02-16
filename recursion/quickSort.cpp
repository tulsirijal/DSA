#include <iostream>
using namespace std;

int partition(int arr[], int low, int high){

    int i = low;
    int j = high;
    int pivotElement = arr[low];

    while(i<=j){

        while(arr[i] <= pivotElement){
            i++;
        }
        while(arr[j]>pivotElement){
            j--;
        }
        if(i<j) {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;


}


void quickSort(int arr[], int low, int high){
    if(low>=high) return;
    
    int partitionIndex = partition(arr,low,high);
    quickSort(arr,low,partitionIndex-1);
    quickSort(arr,partitionIndex + 1, high);
}

int main(){

    int arr[6] = {3,5,2,1,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size-1);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
