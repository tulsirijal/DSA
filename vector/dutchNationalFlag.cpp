#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> array{1,2,-2,-4,4,-1};
    int low = 0, high = array.size() - 1;
    while(low<=high){
        if(array[low] < 0){
            low++;
        } else if(array[high] > 0){
            high--;
        } else {
            swap(array[low],array[high]);
        }
    }




    return 0;
}