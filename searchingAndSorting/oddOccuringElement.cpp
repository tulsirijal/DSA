#include <iostream>
using namespace std;


int findOddOccuring(int arr[],int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(start==end){
            return start;
        }
        if(mid % 2==0){
            if(arr[mid]==arr[mid + 1]){
                start = mid + 2;
            } else {
                end = mid;
            }
        } else {
            if(arr[mid]==arr[mid - 1]){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int arr[] = {1,1,2,2,3,3,4,4,5,6,6,7,7,8,8};
    int sizeOfArr = sizeof(arr)/sizeof(arr[0]);
    int oddOccuringNo = findOddOccuring(arr,sizeOfArr);
    cout << oddOccuringNo << endl;
    return 0;
}
