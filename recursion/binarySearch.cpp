#include <iostream>
using namespace std;
int binarySearch(int *arr, int s , int e, int key){
    if(s>e) {
        return -1;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==key){
        return mid;
    } else if(arr[mid] > key){
        return binarySearch(arr,s,mid-1,key);
    } else if(arr[mid] < key){
        return binarySearch(arr,mid + 1,e,key);
    } 

}
int main(){
    int arr[5] = {1,2,3,4,5};
    int key = 6;
    int size = sizeof(arr)/sizeof(int);
    int s = 0;
    int e = size - 1;
   cout <<  binarySearch(arr,s,e,key) << endl;

   return 0;
}