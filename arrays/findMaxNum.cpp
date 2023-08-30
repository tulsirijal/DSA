#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,5,7,8,9};
    int maxNum = INT_MIN;
    for(int i = 0; i < 6; i++){
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
    cout << maxNum << endl;
    return 0;
}