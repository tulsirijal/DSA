#include  <iostream>
#include <vector>
using namespace std;
int findLastOccurence(vector<int> array,int target){
    int start = 0;
    int end = array.size() - 1;
    int mid = start + (end - start) / 2;
    int index = -1;
    while(start<=end){
        if(target == array[mid]) {
            index = mid;
            start = mid + 1;
           
        } else if (target < array[mid]){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
     return index;
}
int main(){
    vector<int> array {1,2,3,3,3,3,3,3,4};
    int target = 3;
    int lastOccurence = findLastOccurence(array,target);
    cout << lastOccurence << endl;
    return 0;
}