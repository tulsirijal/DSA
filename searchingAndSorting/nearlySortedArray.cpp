#include <iostream>
using namespace std;
int get_target(int arr[],int arrSize,int target){
  int start = 0;
  int end = arrSize - 1;
  int mid = start + (end - start)/2;
  while(start<=end){
    if(mid - 1>=0 && arr[mid - 1]==target){
      return mid - 1;
    }
    if(arr[mid]==target){
      return mid;
    } 
    if (mid + 1 <= end && arr[mid + 1]==target){
      return mid + 1;
    }
    if (target > arr[mid]){
      start = mid + 2;
    } else {
      end = mid - 2;
    }
    mid = start + (end - start)/2;
  }
  return -1;
}
int main(){
    int arr[] = {20,10,30,50,40,60,70};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int target = 70;
    int ans = get_target(arr,arrSize,target);
    cout << ans << endl;
    return 0;
}