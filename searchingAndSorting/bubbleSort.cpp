#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> arr){
  for(int i = 0;i < arr.size();i++){
    cout << arr[i] << "";
  }
}
void bubbleSort(vector<int> &arr){
  for(int i = 0; i < arr.size()-1;i++){
    for(int j = 0;j < arr.size() - i - 1;j++){
      if(arr[j] > arr[j + 1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}
int main() {
  vector<int> arr = {5,3,4,1,2};
  print(arr);
  bubbleSort(arr);
  print(arr);
}