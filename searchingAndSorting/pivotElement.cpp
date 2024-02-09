#include <iostream>
using namespace std;
int findPivot(int arr[],int start,int end,int size){
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}
int main(){
    int arr[7] = {7,11,12,1,2,3,4};
    int s = 0;
    int size = sizeof(arr)/sizeof(int);
    int e = size - 1;
    cout << findPivot(arr,s,e,size) << endl;
}

