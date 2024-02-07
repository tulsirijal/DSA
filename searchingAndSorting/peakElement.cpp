#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int> arr){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while(start <= end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = start + (end - start) /2;
    }
    return end;
}

int main(){

    vector<int> arr {0,10,5,2};
    int peakElement = findPeakElement(arr);
    cout << peakElement << endl;

    return 0;
}