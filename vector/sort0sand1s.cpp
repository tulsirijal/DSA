#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {0,1,0,1,0,1,0,1,1};
    int size = 9;
    int start = 0;
    int end = size - 1;
    int i= 0;
    while(i!=end){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            i++;
            start++;
        } else {
            swap(arr[end],arr[i]);
            end--;
        }
    }
    for(int i = 0; i < 9; i++){
        cout << arr[i] << " ";
    }
} 