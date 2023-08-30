#include <iostream>
using namespace std;
int main(){

    int arr[] = {1,2,3,4,5,-4,-5,-6};
    int minNum = INT_MAX;
    int size = 8;
    for(int i = 0; i < size; i++){
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }
    cout << minNum << endl;

    return 0;
}