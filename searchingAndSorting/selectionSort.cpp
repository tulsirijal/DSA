#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> arr){
  for(int i = 0;i < arr.size();i++){
    cout << arr[i] << "";
  }
}
void selectionSort(vector<int> &arr){
  int size = arr.size();
  for(int i  = 0; i < size -1; i++){
    int minIndex = i;
    for(int j = i + 1;j<size;j++){
      if(arr[j]<arr[minIndex]){
        minIndex = j;
      }
    }
    swap(arr[i],arr[minIndex]);
  }
}
int main() {
  vector<int> arr = {5,3,4,1,2};
  print(arr);
  selectionSort(arr);
  print(arr);
}