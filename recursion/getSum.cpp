#include <iostream>
using namespace std;
int getSum(int *arr, int size){
    if(size==0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }

    int ans = arr[0] + arr[1];
    int sum = ans + getSum(arr+2,size-2);
    return sum;
}
int main(){

    int arr[8] = {1,2,3,4,5,3,4,5};
    int size = 8;
    cout << getSum(arr,size) << endl;
}